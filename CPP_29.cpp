#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const string& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    vector<string> strings = {"apple", "banana", "apricot", "avocado"};
    string prefix = "ap";

    vector<string> filtered_strings = filter_by_prefix(strings, prefix);
    
    for (const string& str : filtered_strings) {
        cout << str << " ";
    }

    vector<string> a = {"hello", "world"};
    vector<string> b = {"hello", "world"};

    if (issame(a, b)) {
        cout << "\nVectors a and b are the same.";
    } else {
        cout << "\nVectors a and b are different.";
    }

    return 0;
}