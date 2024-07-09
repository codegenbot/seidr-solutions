```
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
        string temp = to_string(count);
        temp += " strings in the input have ";
        temp += to_string(count);
        temp += " odd characters.";
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