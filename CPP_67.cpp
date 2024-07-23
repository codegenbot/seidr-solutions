#include <string>
#include <sstream>

using namespace std;

int fruit_distribution(string s, int n) {
    int total_apples = 0;
    int total_oranges = 0;

    string token;
    istringstream iss(s);

    while (getline(iss, token, ' ')) {
        if (token.find("apples") != string::npos) {
            total_apples = stoi(token.substr(0, token.find(" ")).c_str());
        } else if (token.find("oranges") != string::npos) {
            total_oranges = stoi(token.substr(0, token.find(" ")).c_str());
        }
    }

    return n - total_apples - total_oranges;
}