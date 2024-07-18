#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b);

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (string s : lst) {
        int odd_count = 0;
        for (char c : s) {
            if (((c - '0') % 2) != 0) {
                odd_count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(odd_count) + "n the str" + s + "ng " + s + " of the " + to_string(odd_count) + "nput.");
    }
    return result;
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}), {
        "the number of odd elements 2n the str271ng 271 of the 271nput.",
        "the number of odd elements 3n the str137ng 137 of the 137nput.",
        "the number of odd elements 2n the str314ng 314 of the 314nput."
    }));
}  