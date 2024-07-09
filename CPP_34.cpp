#include <algorithm>
#include <vector>
#include <iostream>
#include <initializer_list>

bool issame(vector<int> a, vector<int> b){
    return (a == b);
}

int main() {
    vector<int> input;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        input.push_back(x);
    }
    
    auto unique_end = std::unique(input.begin(), input.end());
    vector<int> output(input.begin(), unique_end);
    sort(output.begin(), output.end());
    
    for (int i : output) {
        cout << i << " ";
    }
    
    assert(std::issame(std::vector<int>({0, 2, 3, 5, 9, 123}), std::vector<int>(output.begin(), output.end())));
    
    return 0;
}