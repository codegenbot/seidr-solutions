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
        string temp;
        temp += "the number of odd elements ";
        temp += to_string(count);
        temp += " in the string ";
        temp += to_string(i + 1);
        result.push_back(temp); 
    }
    for (string s : lst) {
        cout << s << endl;
    }
    return result;
}

int main() {
    vector<string> lst = {"1234567"};
    for (vector<string> output : odd_count(lst)) {
        cout << output << endl;
    }
}