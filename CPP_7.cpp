```cpp
#include <vector>
#include <string>
#include <set>

bool issame(vector<string> a, vector<string> b) {
    set<string> setA(a.begin(), a.end());
    set<string> setB(b.begin(), b.end());

    return setA == setB;

}

int main() {
    int numStrings;
    cin >> numStrings;

    vector<string> strings(numStrings);

    for(int i = 0; i < numStrings; i++) {
        cin >> strings[i];
    }

    string substring;
    cin >> substring;

    vector<string> result = filter_by_substring(strings, substring);
    
    if(result.empty()) {
        cout << "No strings contain the substring '" << substring << "'." << endl;
    } else {
        cout << "Strings containing the substring '" << substring << "':";
        
        for(string s : result) {
            cout << "\n" << s;
        }
    }

    if(issame({substring}, {result[0]})) {
        cout << "\nThe first string is the same as the substring." << endl;
    } else {
        cout << "\nThe first string is not the same as the substring." << endl;
    }

    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;

    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    
    return result;
}