#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const string& s1, const string& s2) {
    return s1 == s2;
}

vector<string> by_length(vector<int> arr){
    vector<int> sorted_arr;
    vector<string> result;
    map<int, string> num_to_name = {
        {1, "One"},
        {2, "Two"},
        {3, "Three"},
        {4, "Four"},
        {5, "Five"},
        {6, "Six"},
        {7, "Seven"},
        {8, "Eight"},
        {9, "Nine"}
    };

    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sorted_arr.push_back(num);
        }
    }

    sort(sorted_arr.begin(), sorted_arr.end());

    reverse(sorted_arr.begin(), sorted_arr.end());

    for (int num : sorted_arr) {
        result.push_back(num_to_name[num]);
    }

    return result;
}

int main() {
    vector<int> input = {3, 5, 2, 9, 4};
    vector<string> output = by_length(input);

    for (const string& s : output) {
        cout << s << " ";
    }

    return 0;
}