#include <vector>
#include <string>

using namespace std;

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

bool issame(vector<string> a, vector<string> b);

int main() {
    // Your code here
}

bool issame(vector<string> a, vector<string> b) {
    // Your code here
}