#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <cassert>

using namespace std;

vector<string> by_length(vector<int> arr){
    vector<string> result;
    map<int, string> num_to_name = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };

    vector<int> sorted_arr;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sorted_arr.push_back(num);
        }
    }

    sort(sorted_arr.begin(), sorted_arr.end(), greater<int>());

    for (int num : sorted_arr) {
        result.push_back(num_to_name[num]);
    }

    return result;
}

int main() {
    assert(by_length({9, 4, 8}) == vector<string>{"Nine", "Eight", "Four"});
    return 0;
}