#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool issame(vector<string> a, vector<string> b);

vector<string> separate_paren_groups(string paren_string){
    vector<string> result;
    string group;
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            count++;
            if (count > 1) {
                group += c;
            }
        } else if (c == ')') {
            count--;
            if (count > 0) {
                group += c;
            } else {
                result.push_back(group);
                group = "";
            }
        }
    }

    return result;
}

bool issame(vector<string> a, vector<string> b) {
    // Your code here to check if a and b are the same
    // Return true if they are the same, else return false
}

int main() {
    // Your test cases to check the issame function
    return 0;
}