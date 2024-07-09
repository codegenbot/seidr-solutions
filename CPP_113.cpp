```
#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> odd_count(std::vector<std::string> lst);

void displayOutput(std::vector<std::string> output) {
    for (std::string s : output) {
        std::cout << s << std::endl;
    }
}

int main() {
    std::vector<std::string> lst;
    std::string temp;
    while (std::getline(std::cin, temp) && !temp.empty()) {
        lst.push_back(temp);
    }
    std::vector<std::string> output = odd_count(lst);
    displayOutput(output);
    return 0;
}

std::vector<std::string> odd_count(std::vector<std::string> lst) {
    std::vector<std::string> result;
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        for (char c : lst[i]) {
            if (c % 2 != 0) {
                count++;
            }
        }
        std::string temp = "the number of odd elements is ";
        temp += std::to_string(count);
        temp += " in the string";
        temp += std::to_string(i + 1);
        temp += ".";
        result.push_back(temp);
    }
    return result;
}