#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> odd_count(vector<string> lst);

bool issame(vector<string> a, vector<string> b);

int main() {
    assert(issame(odd_count({"271", "137", "314"}), {
        "the number of odd elements 2\n the str2ng 2 of the 2\nput.",
        "the number of odd elements 3\n the str3ng 3 of the 3\nput.",
        "the number of odd elements 2\n the str2ng 2 of the 2\nput."
    }));

    return 0;
}

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (string str : lst) {
        int count = 0;
        for (char c : str) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count) + "\n the str" + to_string(result.size()) + "ng " + to_string(result.size()) + " of the " + to_string(result.size()) + "\nput.");
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}