#include <vector>
#include <cassert>

bool vector_equal(vector<float> a, vector<float> b);

vector<float> find_closest_elements(vector<float> numbers);

int main() {
    assert(vector_equal(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
    
    return 0;
}

bool vector_equal(vector<float> a, vector<float> b){
    // code to check if two vectors are equal
    // ...
}

vector<float> find_closest_elements(vector<float> numbers){
    // code to find the closest elements
    // ...
}