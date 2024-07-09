```cpp
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
    vector<string> input;
    cout << "Enter strings separated by spaces: ";
    string s;
    getline(cin, s);
    size_t start = 0;
    while ((size_t)(start = s.find(" ")) != string::npos) {
        input.push_back(s.substr(0, start));
        s.erase(0, start + 1);
    }
    input.push_back(s);

    vector<string> result = sorted_list_sum(input);

    sort(result.begin(), result.end());
    for (const auto& str : result) {
        if (str.length() % 2 == 0) {
            cout << str << " ";
        }
    }
    
    return 0;
}