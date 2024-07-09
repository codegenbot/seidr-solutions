#include <algorithm>
#include <vector>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b){
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
    std::sort(output.begin(), output.end());
    
    for (int i : output) {
        cout << i << " ";
    }
    
    assert(std::equal(input.begin(), unique_end, input.begin()));
}