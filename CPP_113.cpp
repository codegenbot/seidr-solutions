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
        string str = lst[i];
        for (char c : str) {
            if (stoi(string(1, c)) % 2 != 0) {
                count++;
            }
        }
        string temp = "the number of odd elements is ";
        temp += to_string(count);
        temp += " in the string";
        temp += str;
        result.push_back(temp);
    }
    return result;
}

int main() {
    vector<string> lst;
    cout << "Enter strings (enter 'stop' to finish):" << endl;
    while (true) {
        string s;
        cin >> s;
        if (s == "stop") {
            break;
        }
        lst.push_back(s);
    }
    vector<string> output = odd_count(lst);
    displayOutput(output);
    return 0;
}