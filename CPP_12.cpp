#include <vector>
#include <string>
using namespace std;

string longest(vector<string> strings);

int main() {
    // test cases
    vector<string> strings1 = {"abc", "defg", "hijklmn"};
    vector<string> strings2 = {"xyz", "pqr"};
    vector<string> strings3 = {};

    cout << longest(strings1) << endl; // should output "hijklmn"
    cout << longest(strings2) << endl; // should output "pqr"
    cout << longest(strings3) << endl; // should output "None"

    return 0;
}

string longest(vector<string> strings) {
    if (strings.empty()) {
        return "None";
    }
    string longestString = strings[0];
    for (int i = 1; i < strings.size(); i++) {
        if (strings[i].length() > longestString.length()) {
            longestString = strings[i];
        }
    }
    return longestString;
}