#include <string>
#include <sstream>

using namespace std;

int fruit_distribution(string s, int n) {
    stringstream ss(s);
    string token;
    int total_apples = 0, total_oranges = 0;

    while (getline(ss, token, ' ')) {
        if (token.find("apples") != string::npos) {
            total_apples = stoi(token.substr(0, token.find(" ")).c_str());
        }
        else if (token.find("oranges") != string::npos) {
            total_oranges = stoi(token.substr(0, token.find(" ")).c_str());
        }
    }

    return n - total_apples - total_oranges;
}