#include <vector>
#include <string>
#include <iostream>
#include <cassert>

using namespace std;

vector<string> odd_count(const vector<string>& lst) {
    vector<string> result;
    for (const string& s : lst) {
        int odd_count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                odd_count++;
            }
        }
        string res = "the number of odd elements " + to_string(odd_count) +
                     " in the string " + s +
                     " of the input.";
        result.push_back(res);
    }
    return result;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main()
{
    assert(issame(odd_count({"271", "137", "314"}), {
        "the number of odd elements 2 in the string 271 of the input.",
        "the number of odd elements 3 in the string 137 of the input.",
        "the number of odd elements 2 in the string 314 of the input."
    }));
    cout << "Test passed!" << endl;
    return 0;
}