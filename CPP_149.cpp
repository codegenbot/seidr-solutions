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
    cout << "Enter strings separated by spaces: ";
    for(string s; getline(cin, s);) 
        lst.push_back(s);
    
    vector<string> result = sorted_list_sum(lst);

    sort(result.begin(), result.end());
    
    cout << "Sorted list sum of even length strings is:" << endl;
    for (const auto& str : result) {
        if (str.length() % 2 == 0) {
            cout << str << " ";
        }
    }
    cout << endl;
    
    vector<string> test_lst = lst;
    sort(test_lst.begin(), test_lst.end());
    
    assert(issame(sorted(test_lst), {"aaaa", "bbbb"}));
    
    return 0;
}