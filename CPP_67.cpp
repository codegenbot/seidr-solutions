#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    int total_apples = 0;
    while ((pos = s.find(" apples", pos)) != string::npos) {
        total_apples += stoi(s.substr(0, pos).find_last_of('0') == string::npos ? "1" : s.substr(0, pos));
        break;
    }
    int total_oranges = 0;
    while ((pos = s.find(" oranges", pos)) != string::npos) {
        total_oranges += stoi(s.substr(pos + 8).find_last_of('0') == string::npos ? "1" : s.substr(pos + 8));
    }
    return n - total_apples - total_oranges;
}