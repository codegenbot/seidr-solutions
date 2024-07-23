```
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
        result = lst1;
    } else if (len2 < len1) {
        result = lst2;
    } else {
        result = lst1;
    }

    return result;
}

int main() {
    vector<string> vec1;
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    for(int i=0; i<n; i++) {
        string str;
        cout << "Enter a string: ";
        cin >> str;
        vec1.push_back(str);
    }

    vector<string> vec2;
    int m;
    cout << "Enter the number of strings: ";
    cin >> m;

    for(int j=0; j<m; j++) {
        string str;
        cout << "Enter a string: ";
        cin >> str;
        vec2.push_back(str);
    }

    vector<string> result = total_match(vec1, vec2);

    cout << "Shortest matching strings are: \n";
    for (const string& s : result) {
        cout << s << endl;
    }
    
    return 0;
}