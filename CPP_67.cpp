#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    int total_apples = 0;
    while ((pos = s.find(" apples", pos)) != string::npos) {
        total_apples += stoi(s.substr(0, pos).erase(pos - s.find(" ") + 1));
        pos = s.find(" apples", pos);
    }
    return n - total_apples;
}