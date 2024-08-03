#include <vector>
#include <algorithm>

int main() {
    vector<float> l;
    cin >> l[0];
    vector<float> v = l; 
    return *std::max_element(v.begin(), v.end());
}