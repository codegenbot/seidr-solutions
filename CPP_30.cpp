#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

vector<float> get_positive(const vector<float>& l){
    vector<float> positive_nums;
    for(int i=0; i<l.size(); i++){
        if(l[i] > 0){
            positive_nums.push_back(l[i]);
        }
    }
    return positive_nums;
}

int main() {
    vector<float> expected_output = {};
    vector<float> result = get_positive({});
    assert(equal(result.begin(), result.end(), expected_output.begin(), expected_output.end()));

    cout << "Test case passed!" << endl;

    return 0;
}