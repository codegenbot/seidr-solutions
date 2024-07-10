#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cassert>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> by_length(vector<int> arr, vector<string> valid_names){
    vector<string> result;
    map<int, string> num_to_name;
    for (int i = 0; i < valid_names.size(); i++) {
        num_to_name[i + 1] = valid_names[i];
    }
    
    vector<int> valid_nums;
    for (int num : arr) {
        if (num >= 1 && num <= valid_names.size()) {
            valid_nums.push_back(num);
        }
    }

    sort(valid_nums.begin(), valid_nums.end());
    reverse(valid_nums.begin(), valid_nums.end());

    for (int num : valid_nums) {
        result.push_back(num_to_name[num]);
    }

    return result;
}

int main(){
    assert(issame(by_length({9, 4, 8}, {"Nine", "Eight", "Four"}), {"Nine", "Eight", "Four"}));
    return 0;
}