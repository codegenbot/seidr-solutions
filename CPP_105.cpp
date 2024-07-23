#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

bool issame(vector<string> arr) {
    vector<string> temp;
    for (string s : arr) {
        if (s == "One" || s == "Two" || s == "Three" || 
            s == "Four" || s == "Five" || s == "Six" || 
            s == "Seven" || s == "Eight" || s == "Nine")
            temp.push_back(s);
    }
    
    if (temp.size() > 0) {
        for (int i = 1; i <= 9; ++i) {
            string str = std::to_string(i);
            if (std::find(temp.begin(), temp.end(), str + "0") != temp.end())
                return true;
        }
    }
    
    return false;
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

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    if (issame(by_length(arr))) {
        std::cout << "Same\n";
    } else {
        std::cout << "Not Same\n";
    }
    return 0;
}