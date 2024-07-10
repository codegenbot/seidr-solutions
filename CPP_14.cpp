#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        bool same = true;
        for(int j = 0; j < a[i].size(); j++) {
            if(a[i][j] != b[i][j]) {
                same = false;
                break;
            }
        }
        if(!same) {
            return false;
        }
    }
    return true;
}

vector<string> all_prefixes(string str) {
    vector<string> result;
    for (int i = 1; i <= str.length(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    vector<string> prefixes = all_prefixes(str);
    bool isSame = true;
    
    for(int i = 1; i <= str.length(); ++i) {
        if(!issame(prefixes.begin(), prefixes.end(), prefixes.begin() + i - 1, prefixes.begin())) {
            isSame = false;
            break;
        }
    }
    
    if(isSame) {
        cout << "The string and its prefixes are the same." << endl;
    } else {
        cout << "The string and its prefixes are not the same." << endl;
    }
    
    return 0;
}