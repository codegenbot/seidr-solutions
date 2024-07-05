#include <vector>
#include <string>
#include <cassert>
#include <iostream>

using namespace std;

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        int odd_count = 0;
        for (char ch : str) {
            if ((ch - '0') % 2 != 0) {
                odd_count++;
            }
        }
        string res = "the number of odd elements " + to_string(odd_count) +
                     " in the string " + to_string(odd_count) + " of the input.";
        result.push_back(res);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}), {
        "the number of odd elements 2 in the string 2 of the input.",
        "the number of odd elements 3 in the string 3 of the input.",
        "the number of odd elements 2 in the string 2 of the input."
    }));

    cout << "All tests passed!" << endl;

    return 0;
}