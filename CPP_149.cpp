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
    vector<string> lst;
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        string s;
        cout << "Enter string " << i+1 << ": ";
        getline(cin, s);
        lst.push_back(s);
    }
    
    vector<string> result = sorted_list_sum(lst);
    
    cout << "Sorted list: ";
    for (const auto& str : result) {
        cout << str << " ";
    }
    cout << endl;
    
    return 0;
}