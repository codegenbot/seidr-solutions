```cpp
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> by_length(vector<int> arr){
    vector<int> sortedArr;
    for(int i : arr){
        if(i >= 1 && i <= 9)
            sortedArr.push_back(i);
    }
    sort(sortedArr.begin(), sortedArr.end());
    reverse(sortedArr.begin(), sortedArr.end());
    vector<string> result;
    map<int, string> numToName = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, 
                                  {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    for(int i : sortedArr){
        result.push_back(numToName[i]);
    }
    return result;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<string> same = by_length(arr);
    
    if(issame(same, {"Eight", "Five", "Four", "One", "Nine", "Seven", "Six", "Three", "Two"})) {
        cout << "The vectors are the same." << endl;
    } else {
        cout << "The vectors are not the same." << endl;
    }
    
    return 0;
}