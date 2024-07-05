#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> odd_count(const vector<string>& lst) {
    vector<string> result;
    for (const auto& str : lst) {
        int odd_count = 0;
        for (char c : str) {
            if (isdigit(c) && ((c - '0') % 2 != 0)) {
                odd_count++;
            }
        }
        string res = "the number of odd elements " + to_string(odd_count) + " in the string " + str + " of the input.";
        result.push_back(res);
    }
    return result;
}

int main() {
    auto result = odd_count({"271", "137", "314"});
    vector<string> expected = {
        "the number of odd elements 2 in the string 271 of the input.",
        "the number of odd elements 3 in the string 137 of the input.",
        "the number of odd elements 2 in the string 314 of the input."
    };
    assert(result == expected);
    cout << "All tests passed!" << endl;
    return 0;
}