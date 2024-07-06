#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        for (char c : lst[i]) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        string output = "the number of odd elements ";
        output += to_string(count);
        output += "n the str";
        output += to_string(i+1);
        output += "ng ";
        output += to_string(i+1);
        output += " of the nput.";
        result.push_back(output);
    }
    return result;
}

int main() {
    vector<string> lst = {"1234567", "3", "11111111"};
    vector<string> result = odd_count(lst);
    for (string s : result) {
        cout << s << endl;
    }
    return 0;
}