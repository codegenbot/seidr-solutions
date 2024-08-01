#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    int total_apples = 0, total_oranges = 0;
    
    while ((pos = s.find(" apples", pos)) != string::npos) {
        if (s.substr(pos - 1, 2).compare("10") == 0) {
            total_apples = n;
            break;
        }
        int num_apples = stoi(s.substr(0, pos - 3));
        total_apples += num_apples;
        s.erase(0, pos + 7);
    }
    
    while ((pos = s.find(" oranges", 0)) != string::npos) {
        if (s.substr(pos - 1, 2).compare("10") == 0) {
            total_oranges = n;
            break;
        }
        int num_oranges = stoi(s.substr(0, pos - 7));
        total_oranges += num_oranges;
        s.erase(0, pos + 8);
    }
    
    return n - total_apples - total_oranges;
}