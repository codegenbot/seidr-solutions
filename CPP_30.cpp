#include <vector>
#include <cassert>

vector<float> get_positive(vector<float> l){
    vector<float> positive_nums;
    for(float num : l){
        if(num > 0){
            positive_nums.push_back(num);
        }
    }
    return positive_nums;
}

bool issame(vector<float> a, vector<float> b){

    // Compare the size of the vectors
    if(a.size() != b.size()){
        return false;
    }

    // Iterate through both vectors
    for(int i=0; i<a.size(); ++i){
        // If the elements are not equal, return false
        if(a[i] != b[i]){
            return false;
        }
    }

    // If all elements are equal, return true
    return true;
}

int main() {
    // Test the get_positive function with an empty vector
    assert(issame(get_positive({}), {}));
    return 0;
}