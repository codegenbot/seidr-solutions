#include<string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    int apples = 0, oranges = 0;
    
    while ((pos = s.find(" apples")) != string::npos) {
        apples = stoi(s.substr(0, pos).substr(s.find(" ") + 1));
        break;
    }
    
    if (s.find(" oranges") != string::npos) {
        size_t pos2 = s.find(" oranges");
        int temp = n - apples;
        while ((pos2 = s.find(" and", pos2)) != string::npos) {
            temp -= stoi(s.substr(0, pos2).substr(s.find(" ") + 1));
        }
        return temp;
    } else {
        return n;
    }
}