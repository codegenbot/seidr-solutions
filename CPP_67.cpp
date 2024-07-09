#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    string numStr;
    int totalApples = 0, totalOranges = 0;
    
    while ((pos = s.find(" apples")) != string::npos || (pos = s.find(" oranges")) != string::npos) {
        if (pos > 0) {
            size_t start = 0;
            if (s.substr(0, pos).find("apples") == string::npos)
                start = pos;
            else
                start = s.find("apples");
            numStr = s.substr(start, pos - start);
            if (!numStr.empty()) {
                int val = stoi(numStr);
                if (s.substr(0, pos).find("apples") != string::npos)
                    totalApples += val;
                else
                    totalOranges += val;
            }
        }
        s.erase(0, pos + 6);
    }
    
    return n - totalApples - totalOranges;
}