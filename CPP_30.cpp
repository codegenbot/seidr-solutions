#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<float> a, vector<float> b){
    // Compare a and b and return true if they are the same, false otherwise
    if(a.size() != b.size()){
        return false;
    }

    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }

    return true;
}

vector<float> get_positive(vector<float> l){
    vector<float> positive_nums;
    for(int i=0; i<l.size(); i++){
        if(l[i] > 0){
            positive_nums.push_back(l[i]);
        }
    }
    return positive_nums;
}

int main() {
    // Test the get_positive function
    assert(issame(get_positive({}), {}));

    // Add more test cases to validate the code

    return 0;
}