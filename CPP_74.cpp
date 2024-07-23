```
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    vector<string> result;
    int len1 = 0, len2 = 0;

    // Calculate the total length of strings in both vectors
    for (const string& s : lst1) {
        len1 += s.length();
    }
    for (const string& s : lst2) {
        len2 += s.length();
    }

    // Compare the lengths and add strings to result vector accordingly
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
    vector<string> vec1 = {"hi", "admin"};
    vector<string> vec2 = {"hI", "Hi"};

    vector<string> result = total_match(vec1, vec2);

    for (const string& s : result) {
        cout << s << endl;
    }

    return 0;
}