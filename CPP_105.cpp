#include <map>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b){
    return a == b;
}

vector<string> by_length(vector<int> arr) {
    map<int, string> digit_map = {
        {4, "Four"},
        {9, "Nine"},
        {8, "Eight"}
    };
    vector<string> result;
    for (int num : arr) {
        result.push_back(digit_map[num]);
    }
    return result;
}