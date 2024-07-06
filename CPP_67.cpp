#include <string>
#include <sstream>

using namespace std;

int fruit_distribution(string s, int n) {
    istringstream iss(s);
    string token;
    int total = 0;
    int apples = 0;
    int oranges = 0;

    while (getline(iss, token, ' ')) {
        if (token.find("apples") != string::npos) {
            istringstream app_token(token);
            app_token >> apples;
        } else if (token.find("oranges") != string::npos) {
            istringstream ora_token(token);
            ora_token >> oranges;
        }
    }

    total = n - apples - oranges;

    return total;
}