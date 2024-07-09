#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        for (char c : lst[i]) {
            if (c % 2 != 0) {
                count++;
            }
        }
        string temp = "the number of odd elements ";
        temp += to_string(count);
        temp += "n the str";
        temp += to_string(i + 1);
        temp += "ng ";
        temp += to_string(i + 1);
        temp += " of the nput.";
        result.push_back(temp);
    }
    return result;
}

int main() {
    vector<string> lst = {"1234567"};
    vector<string> output = odd_count(lst);
    for (string s : output) {
        cout << s << endl;
    }
    return 0;
}