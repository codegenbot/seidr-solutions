#include <algorithm>
#include <vector>

bool issame(vector<string> a, vector<string> b);

vector<string> by_length(vector<int> arr);

int main() {
    // Function calls and other code
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> by_length(vector<int> arr){
    vector<string> names = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    vector<int> sorted_arr;
    vector<string> result;

    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sorted_arr.push_back(num);
        }
    }

    sort(sorted_arr.begin(), sorted_arr.end());

    reverse(sorted_arr.begin(), sorted_arr.end());

    for (int num : sorted_arr) {
        result.push_back(names[num - 1]);
    }

    return result;
}