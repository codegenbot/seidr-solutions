#include <vector>
#include <algorithm>

int main() {
    std::vector<int> l;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        l.push_back(temp);
    }
    vector<float> v(l.begin(), l.end());
    return *max_element(v.begin(), v.end());
}