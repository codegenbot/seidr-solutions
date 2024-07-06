#include <string>
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

    total = n - apples - oranges;

    return total > 0 ? total : 0;
}

int main() {
    assert(fruit_distribution("1 apples and 100 oranges", 120) == 19);
    return 0;
}