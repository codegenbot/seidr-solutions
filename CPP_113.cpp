#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> odd_count(vector<string> input) {
    vector<string> result;
    for (const string& str : input) {
        int count = 0;
        for (char c : str) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements in the string " + to_string(count) + " of the input.");
    }
    return result;
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}),
          {"the number of odd elements in the string 2 of the input.",
           "the number of odd elements in the string 3 of the input.",
           "the number of odd elements in the string 2 of the input."}));
    return 0;
}