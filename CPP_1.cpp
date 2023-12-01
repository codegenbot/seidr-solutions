#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    stack<int> st;
    int n = paren_string.size();

    for (int i = 0; i < n; i++) {
        if (paren_string[i] == '(') {
            st.push(i);
        } else if (paren_string[i] == ')') {
            int start = st.top();
            st.pop();
            result.push_back(paren_string.substr(start, i - start + 1));
        }
    }

    return result;
}

int main() {
    string input;
    getline(cin, input);

    vector<string> result = separate_paren_groups(input);

    for (string s : result) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}