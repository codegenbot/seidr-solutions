#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    string temp = "";
    int total_apples = 0, total_oranges = 0;

    while ((pos = s.find(" apples")) != string::npos) {
        temp = s.substr(0, pos);
        total_apples = stoi(temp.substr(temp.find_last_of(' ') + 1));
        break;
    }

    if (total_apples == 0) {
        return n;
    }

    while ((pos = s.find(" oranges")) != string::npos) {
        temp = s.substr(0, pos);
        total_oranges = stoi(temp.substr(temp.find_last_of(' ') + 1));
    }

    return n - total_apples - total_oranges;
}