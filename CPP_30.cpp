#include <vector>
#include <algorithm>
#include <initializer_list>

bool operator==(const vector<float>& a, const vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > 1e-9) { // to handle floating point precision issues
            return false;
        }
    }
    return true;
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float x : l){
        if(x > 0)
            result.push_back(x);
    }
    return result;
}

int main() {
    vector<float> input({});
    if (!issame(get_positive(input), input)) {  
        cout << "Test failed"; // Add error handling and test
    } else {
        cout << "Test passed";
    }
    return 0;
}