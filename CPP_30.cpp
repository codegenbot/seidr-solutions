#include <iostream>
#include <vector>
#include <cassert>

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
    assert (issame(get_positive({}) , {}));

    cout << "Test case passed!" << endl;

    return 0;
}