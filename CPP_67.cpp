```cpp
int fruit_distribution(std::string s, int n) {
    std::istringstream iss(s);
    std::string token;
    int total = 0;
    int apples = 0;
    int oranges = 0;

    while (std::getline(iss, token, ' ')) {
        if (token.find("apples") != std::string::npos) {
            app_token >> apples;
        } else if (token.find("oranges") != std::string::npos) {
            ora_token >> oranges;
        }
    }

    total = std::max(0, n - apples - oranges);

    return apples + oranges > n ? 0 : total;
}