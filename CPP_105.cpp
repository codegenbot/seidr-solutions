#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) 
        return false;
    
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i]) 
            return false;

    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<int> temp;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            temp.push_back(i);
    }
    
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    
    vector<string> result;
    for (int i : temp) {
        string s = to_string(i);
        map<char, string> m = {{'1', "One"}, {'2', "Two"}, {'3', "Three"}, 
                                {'4', "Four"}, {'5', "Five"}, {'6', "Six"}, 
                                {'7', "Seven"}, {'8', "Eight"}, {'9', "Nine"}};
        result.push_back(m.at(s[0]));
    }
    
    return result;
}