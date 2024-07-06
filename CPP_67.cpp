#include <string>

int fruit_distribution(std::istringstream& iss, int n) {
    std::string token;
    int total = 0;
    int apples = 0;
    int oranges = 0;

    while (std::getline(iss, token, ' ')) {
        if (token.find("apples") != std::string::npos) {
            iss >> apples;
        } else if (token.find("oranges") != std::string::npos) {
            iss >> oranges;
        }
    }

    total = std::max(0, n - apples - oranges);

    return apples + oranges > n ? 0 : total;
}