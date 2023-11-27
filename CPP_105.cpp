#include <vector>
#include <algorithm>
#include <map>
#include <cassert>
#include <string>

using namespace std;

vector<string> by_length(vector<int> arr) {
    vector<string> result;
    map<int, string> numToName = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};

    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= 1 && arr[i] <= 9) {
            result.push_back(numToName[arr[i]]);
        }
    }
    
    return result;
}

bool checkEqual(vector<string> a, vector<string> b){
    return a == b;
}

int main() {
    assert(checkEqual(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
    
    return 0;
}