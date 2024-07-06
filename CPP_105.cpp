#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool same(const vector<string>& a, const vector<string>& b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

vector<string> by_length(vector<int> arr) {
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
    vector<int> input = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<string> output = by_length(input);

    for (string str : output) {
        cout << str << endl;
    }

    return 0;
}