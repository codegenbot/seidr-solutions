```cpp
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
        string temp = to_string(i + 1);
        temp += ": " + to_string(count) + " character(s) are odd.";
        result.push_back(temp);
    }
    return result;
}

int main() {
    vector<string> input;
    cout << "Enter the number of strings: ";
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        input.push_back(s);
    }
    
    vector<string> output = odd_count(input);
    displayOutput(output);

    return 0;
}