#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    vector<string> result;
    int len1 = 0, len2 = 0;

    for (const string& s : lst1) {
        len1 += s.length();
    }
    for (const string& s : lst2) {
        len2 += s.length();
    }

    if (len1 < len2) {
        for (const string& s : lst1) {
            result.push_back(s);
        }
    } else if (len2 < len1) {
        for (const string& s : lst2) {
            result.push_back(s);
        }
    } else {
        for (const string& s : lst1) {
            result.push_back(s);
        }
    }

    return result;
}

int main() {
    vector<string> vec1, vec2;
    cout << "Enter words for list 1: ";
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        vec1.push_back(s);
    }
    
    cout << "Enter words for list 2: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        vec2.push_back(s);
    }

    vector<string> result = total_match(vec1, vec2);

    for (const string& s : result) {
        cout << s << endl;
    }

    return 0;
}