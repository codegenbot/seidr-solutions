#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    string numStr = "";
    int totalFruits = 0;
    int apples = 0;
    int oranges = 0;
    
    while ((pos = s.find(" ")) != string::npos) {
        if (numStr.length() > 0) {
            if (stoi(numStr) == 1) {
                if (s.substr(0, pos) == "apples") apples = stoi(numStr);
                else if (s.substr(0, pos) == "oranges") oranges = stoi(numStr);
            } else {
                totalFruits += stoi(numStr);
            }
        }
        numStr = s.substr(pos + 1);
    }
    
    return n - apples - oranges;
}