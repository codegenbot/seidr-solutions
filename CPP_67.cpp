Here is the completed code:

#include <string>
#include <sstream>

using namespace std;

int fruit_distribution(string s, int n) {
    int total_apples = 0;
    int total_oranges = 0;
    
    string temp;
    for (char c : s) {
        if (c == ' ') {
            if (!temp.empty()) {
                if (temp.find("apples") != string::npos) {
                    total_apples = stoi(temp.substr(0, temp.find(" ")));
                } else if (temp.find("oranges") != string::npos) {
                    total_oranges = stoi(temp.substr(0, temp.find(" ")));
                }
                temp.clear();
            }
        } else {
            temp += c;
        }
    }
    
    return n - total_apples - total_oranges;
}