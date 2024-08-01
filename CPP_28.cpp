namespace ContestProblem_CPP_28 {

#include <iostream>
#include <string>
#include <vector>
#include <cassert>

std::string concatenate(const std::vector<std::string>& strings) {
    std::string result;
    for(const std::string& s : strings){
        result += s;
    }
    return result;
}

}

int main() {
    int n;
    std::vector<std::string> strings;

    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    std::cout << "Enter " << n << " strings: ";
    for (int i = 0; i < n; ++i) {
        std::string s;
        std::cin >> s;
        strings.push_back(s);
    }

    std::string concatenated = ContestProblem_CPP_28::concatenate(strings);

    std::cout << "Concatenated string: " << concatenated << std::endl;

    return 0;
}