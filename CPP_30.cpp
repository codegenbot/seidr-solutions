#include <iostream>
#include <vector>

using namespace std;

vector<float> get_positive(vector<float> l);

int main() {
    vector<float> nums = {1.5, -2.3, 4.7, -3.8, 0.9};
    vector<float> positive_nums = get_positive(nums);
    for (int i = 0; i < positive_nums.size(); i++) {
        cout << positive_nums[i] << " ";
    }
    return 0;
}

vector<float> get_positive(vector<float> l){
    vector<float> positive_nums;
    for (int i = 0; i < l.size(); i++) {
        if (l[i] > 0) {
            positive_nums.push_back(l[i]);
        }
    }
    return positive_nums;
}