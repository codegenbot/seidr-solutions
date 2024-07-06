```cpp
int fruit_distribution(std::string s, int n) {
    std::istringstream iss(s);
    std::string token;
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

    int total = n - apples - oranges;

    return total;
}