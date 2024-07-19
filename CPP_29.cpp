```cpp
#include <vector>
#include <string>

bool issame(vector<string>, vector<string>);
vector<string> filter_by_prefix(vector<string>, string);

int main() {
    vector<string> strings;
    string prefix;
    
    cin >> prefix;
    
    for(string s; getline(cin, s);) {
        strings.push_back(s);
    }
    
    vector<string> result = filter_by_prefix(strings, prefix);
    
    for(auto s : result) {
        cout << s << endl;
    }
}