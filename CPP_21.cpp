#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());

    vector<float> result;
    for (float num : numbers) {
        result.push_back((num - min_val) / (max_val - min_val));
    }
    return result;
}

bool issame(vector<float> a, vector<float> b) {
    int size = a.size();
    if(size!=b.size())return false;
    for(int i=0;i<size;i++){
        if(abs(a[i]-b[i])>1e-4) return false;
    }
    return true;
}