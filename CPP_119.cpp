#include <string>
#include <vector>

int main() {
    int main() {
        string match_parens(vector<string> lst) {
            int open = 0, close = 0;
            for (const auto& s : lst) {
                for (char c : s) {
                    if (c == '(') open++;
                    else close++;
                }
            }
            return (open == close) ? "Yes" : "No";
        }

        vector<string> lst;
        int num_pairs;
        cout << "Enter the number of pairs: ";
        cin >> num_pairs;

        for (int i = 0; i < num_pairs; i++) {
            string str;
            cout << "Enter a string (" + to_string(i+1) + "): ";
            getline(cin, str);
            lst.push_back(str);
        }

        if(lst.size() > 0)
            cout << "Matched parentheses: " << match_parens(lst) << endl;
        else
            cout << "No input provided." << endl;

        return 0;
    }
}