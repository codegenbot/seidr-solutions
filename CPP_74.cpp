#include <iostream>
#include <vector>
#include <string>
#include <sstream>

bool isSame(const std::vector<std::string>& s1, const std::vector<std::string>& s2) {
    return s1.size() == 3 && s2.size() == 3 && s1[0] == s2[0] && s1[1] == s2[1] && s1[2] == s2[2];
}

int totalSum(const std::vector<std::string>& lst) {
    int sum = 0;
    for (const auto& s : lst) {
        for (char c : s) {
            sum += static_cast<int>(c);
        }
    }
    return sum;
}

std::vector<std::string> totalMatch(const std::vector<std::string>& lst1, const std::vector<std::string>& lst2) {
    if (lst1.empty() || lst2.empty()) return {};
    int sum1 = 0;
    for (const auto& s : lst1) {
        sum1 += totalSum({s});
    }
    int sum2 = 0;
    for (const auto& s : lst2) {
        sum2 += totalSum({s});
    }
    if (sum1 < sum2) return {lst1[0], lst2[0]};
    else if (sum1 > sum2) return {lst2[0], lst1[0]};
    else return {lst1[0], lst2[0]};  // or return an empty vector
}

int main() {
    std::vector<std::string> lst1 = {"apple", "banana", "cherry"};

    std::vector<std::string> lst2 = {"date", "elderberry", "fig"};

    std::vector<std::string> lst3 = {"grape", "honeydew", "ice cream"};

    std::vector<std::string> lst4 = {"jackfruit", "kiwi", "lemon"};

    // User input
    std::cout << "Enter 2 lists of fruits separated by spaces: ";
    std::string user_input1, user_input2;
    std::getline(std::cin, user_input1);
    std::getline(std::cin, user_input2);

    std::istringstream iss1(user_input1), iss2(user_input2);
    for (int i = 0; i < 3 && std::getline(iss1, user_input1, ' ') && i < 3; ++i) {
        lst1.push_back(user_input1);
    }
    for (int i = 0; i < 3 && std::getline(iss2, user_input2, ' ') && i < 3; ++i) {
        lst2.push_back(user_input2);
    }

    if (!lst1.empty() && !lst2.empty()) {
        int sum1 = totalSum(lst1);
        int sum2 = totalSum(lst2);

        std::cout << "Sum of list 1: " << sum1 << std::endl;
        std::cout << "Sum of list 2: " << sum2 << std::endl;

        if (sum1 < sum2) {
            std::cout << "List 1 has the smaller sum." << std::endl;
        }
        else if (sum1 > sum2) {
            std::cout << "List 2 has the smaller sum." << std::endl;
        }
        else {
            std::cout << "Both lists have the same sum." << std::endl;
        }

        std::vector<std::string> result = totalMatch(lst1, lst2);
        if (!result.empty()) {
            std::cout << "The fruit that appears in both lists is: " << result[0] << std::endl;
        }
        else {
            std::cout << "No fruits appear in both lists." << std::endl;
        }
    }

    return 0;
}