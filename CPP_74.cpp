#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    int sum1 = 0;
    int sum2 = 0;

    // Read input from user
    std::vector<std::string> lst1, lst2;
    for (int i = 0; i < 2; ++i) {
        if (i == 0) {
            std::cout << "Enter strings for list 1: ";
        } else {
            std::cout << "Enter strings for list 2: ";
        }
        std::string s;
        while (std::cin >> s) {
            if (i == 0) {
                lst1.push_back(s);
            } else {
                lst2.push_back(s);
            }
        }
    }

    // Process lists based on sum
    if (sum1 < sum2) {
        std::cout << "List 1 is processed.\n";
    } else if (sum1 > sum2) {
        std::cout << "List 2 is processed.\n";
    } else {
        std::cout << "Both lists are processed.\n";
    }
    return 0;
}