#include <vector>
#include <string>
#include <cassert>

vector<string> odd_count(vector<string> lst);

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (string s : lst) {
        int count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count) + "n the str" + to_string(count) + "ng " + s + " of the " + to_string(count) + "nput.");
    }
    return result;
}

int main() {
    assert(odd_count({"271", "137", "314"}) == vector<string>{
        "the number of odd elements 2n the str2ng 271 of the 2nput.",
        "the number of odd elements 3n the str3ng 137 of the 3nput.",
        "the number of odd elements 2n the str2ng 314 of the 2nput."
    });
}