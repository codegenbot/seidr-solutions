#include <vector>
#include <cmath>
#include <limits>
#include <cassert>

using namespace std;

bool issame(const vector<float>& a, const vector<float>& b);

vector<float> find_closest_elements(const vector<float>& numbers);

bool issame(const vector<float>& a, const vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<float> find_closest_elements(const vector<float>& numbers) {
    float min_diff = numeric_limits<float>::infinity();

    for(int i=0; i<numbers.size(); i++){
        for(int j=i+1; j<numbers.size(); j++){
            float diff = abs(numbers[i] - numbers[j]);
            if(diff < min_diff){
                min_diff = diff;
            }
        }
    }

    vector<float> result;

    for(int i=0; i<numbers.size(); i++){
      for(int j=i+1; j<numbers.size(); j++){
        float diff = abs(numbers[i] - numbers[j]);
        if(diff == min_diff) {
            result.push_back(numbers[i]);
            result.push_back(numbers[j]);
        }
      }
    }

    return result;
}

int main() {
    assert(::issame(find_closest_elements(vector<float>({1.1, 2.2, 3.1, 4.1, 5.1})), vector<float>({2.2, 3.1})));
    return 0;
}