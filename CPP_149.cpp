#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });
    return result;
}

int main() {
    vector<string> lst;
    cout << "Enter the list of strings, each on a new line. When you're done, enter 'done'." << endl;
    string input;
    while (true) {
        cin >> input;
        if (input == "done") break;
        lst.push_back(input);
    }
    vector<string> result = sorted_list_sum(lst);
    
    for (const auto& str : result) {
        cout << str << endl;
    }
    
    return 0;
}