```
#include <iostream>
#include <sstream>

int fruit_distribution(std::string s, int n) {
    std::istringstream iss(s);
    std::string token;
    int total = 0;
    int apples = 0;
    int oranges = 0;

    while (std::getline(iss, token, ' ')) {
        if (token.find("apples") != std::string::npos) {
            std::istringstream app_token(token);
            app_token >> apples;
        } else if (token.find("oranges") != std::string::npos) {
            std::istringstream ora_token(token);
            ora_token >> oranges;
        }
    }

    total = std::max(0, n - apples - oranges);

    return apples + oranges > n ? 0 : total;
}

int main() {
    std::string s;
    int n;
    std::cout << "Enter the string with fruit information: ";
    std::cin >> s;
    std::cout << "Enter the number of fruits to distribute: ";
    std::cin >> n;

    int result = fruit_distribution(s, n);
    std::cout << "Total fruits distributed: " << result << std::endl;

    return 0;
}