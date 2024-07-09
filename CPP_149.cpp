```cpp
namespace std { class initializer_list; }

#include <vector>
#include <algorithm>
#include <string>
#include <initializer_list>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return (a == b);
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

int main_entry() {
    assert(issame(vector<string>(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"})), vector<string>({"cc","dd","aaaa","bbbb"})));
    
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    
    vector<string> inputStrings;
    for(int i = 0; i < n; i++) {
        string str;
        cout << "Enter string " << (i+1) << ": ";
        getline(cin, str);
        inputStrings.push_back(str);
    }
    
    vector<string> output = sorted_list_sum(inputStrings);
    
    for(int i = 0; i < output.size(); i++) {
        bool found = false;
        for(int j = 0; j < output.size(); j++) {
            if(i != j && output[i] == output[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            cout << output[i] << endl;
        }
    }
    
    return 0;
}