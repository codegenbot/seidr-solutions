#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

bool issame(vector<int> arr1, vector<int> arr2) {
    if (arr1.size() != arr2.size())
        return false;
    
    for (int i = 0; i < arr1.size(); i++) {
        if (arr1[i] != arr2[i])
            return false;
    }
    
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

int main() {
    vector<int> arr1 = {3, 5, 2, 4};
    vector<int> arr2 = {5, 4, 2, 3};
    vector<string> output = by_length(arr1);
    for (string str : output) 
        cout << str << " ";
    cout << endl;
    
    if(issame(arr1,arr2))
        cout << "The two arrays are the same." << endl;
    else
        cout << "The two arrays are not the same." << endl;

    return 0;
}