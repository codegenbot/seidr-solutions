#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> odd_count(vector<string> lst);

void displayOutput(vector<string> output) {
    for (string s : output) {
        cout << s << endl;
    }
}

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        for (char c : lst[i]) {
            if ((int(c) % 2 != 0)) {
                count++;
            }
        }
        string temp = "The number of odd elements is ";
        temp += to_string(count);
        temp += " in the string";
        temp += to_string(i + 1);
        temp += ".";
        result.push_back(temp);
    }
    return result;
}

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        for (char c : lst[i]) {
            if ((int(c) % 2 != 0)) {
                count++;
            }
        }
        string temp = to_string(i + 1);
        temp += ": " + to_string(count) + " character(s) are odd.";
        result.push_back(temp);
    }
    return result;
}