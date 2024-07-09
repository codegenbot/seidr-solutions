```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

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
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        string temp = "the number of odd elements is ";
        temp += to_string(count);
        temp += " in the string";
        temp += to_string(i + 1);
        temp += ".";
        result.push_back(temp);
    }
    return result;
}

int main() {
    vector<string> lst;
    string str;
    while (true) {
        cout << "Enter a string (or 'stop' to finish): ";
        cin >> str;
        if (str == "stop")
            break;
        lst.push_back(str);
    }
    vector<string> output = odd_count(lst);
    displayOutput(output);
    return 0;
}