#include <algorithm>
#include <vector>
#include <limits>

using namespace std;

bool issame(vector<float> a,vector<float>b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(abs(a[i] - b[i]) > 1e-5) return false;
    }
    return true;
}

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numeric_limits<float>::max();
    vector<float> closest_pair;
    for (int i = 0; i < numbers.size() - 1; i++) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }
    return closest_pair;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) , {2.2, 3.1}));
    return 0;
}