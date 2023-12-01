#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<float> a, vector<float> b) {
    // Code for comparing if a and b are same
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

vector<float> sort_even(vector<float> l) {
    // Code to sort even elements in the vector l
    vector<float> result;
    for(int i=0; i<l.size(); i++){
        if(i % 2 == 0){
            result.push_back(l[i]);
        }
    }
    sort(result.begin(), result.end());
    for(int i=0, j=0; i<l.size(); i++){
        if(i % 2 == 0){
            l[i] = result[j++];
        }
    }
    return l;
}

int main() {
    // Test the code
    vector<float> input = {1.5, 2.3, 4.1, 3.7, 5.2};
    vector<float> expected_output = {1.5, 2.3, 4.1, 3.7, 5.2};

    vector<float> sorted = sort_even(input);
    assert(issame(sorted, expected_output));

    return 0;
}