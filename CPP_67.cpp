#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    int total_apples = 0;
    int total_oranges = 0;
    string temp;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (temp.find("apples") != string::npos)
                total_apples = stoi(temp.substr(0, temp.find(" ")).c_str());
            else if (temp.find("oranges") != string::npos)
                total_oranges = stoi(temp.substr(0, temp.find(" ")).c_str());
            temp = "";
        } else {
            temp += s[i];
        }
    }

    return n - total_apples - total_oranges;
}