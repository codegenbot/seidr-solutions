#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (string s : lst) {
        int count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count) + "\n the string " + s + " of the input.");
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    int n;
    cin >> n; // Reading the number of strings
    vector<string> input(n);
    for (int i = 0; i < n; ++i) {
        cin >> input[i]; // Reading the strings
    }

    vector<string> output = odd_count(input);

    for (string res : output) {
        cout << res << endl; // Output the result
    }

    return 0;
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}),
                  {"the number of odd elements 2\n the string 271 of the input.",
                   "the number of odd elements 2\n the string 137 of the input.",
                   "the number of odd elements 2\n the string 314 of the input."}));
    return 0;
}