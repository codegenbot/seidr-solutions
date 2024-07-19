#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string>, vector<string>);
vector<string> filter_by_prefix(vector<string>, string);

int main() {
    int n;
    std::cin >> n;
    
    vector<string> strings;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        strings.push_back(s);
    }
    
    string prefix;
    cin >> prefix;

    vector<string> result = filter_by_prefix(strings, prefix);

    cout << "Prefix: " << prefix << endl;
    cout << "Result: ";
    for(string str : result) {
        cout << str << " ";
    }
    cout << endl;
    return 0;
}