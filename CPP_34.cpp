#include <algorithm>
#include <vector>
#include <iostream>

bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
    return (a == b);
}

int main() {
    std::vector<int> input;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        input.push_back(x);
    }
    
    auto unique_end = std::unique(input.begin(), input.end());
    std::vector<int> output(input.begin(), unique_end);
    sort(output.begin(), output.end());
    
    for (int i : output) {
        cout << i << " ";
    }
    
    assert(isSame({0, 2, 3, 5, 9, 123}, std::vector<int>(output.begin(), output.end())));
    
    return 0;
}