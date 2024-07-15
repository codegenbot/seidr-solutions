#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> odd_count(vector<string> lst);

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}), {
        "the number of odd elements 2\n the str2ng 2 of the 2nput.",
        "the number of odd elements 3\n the str3ng 3 of the 3nput.",
        "the number of odd elements 2\n the str2ng 2 of the 2nput."
    }));
    
    return 0;
}

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (string s : lst) {
        int count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count) + "\n the str" + to_string(count) + "ng " + s + " of the " + to_string(count) + "\nput.");
    }
    return result;
}