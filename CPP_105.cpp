```cpp
#include <vector>
#include <algorithm>

bool issame(vector<string> a,vector<string>b){
    return a == b;
}

vector<string> by_length(vector<int> arr) {
    vector<string> numbers;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(to_string(num));
        }
    }
    sort(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.end());
    return numbers;
}

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
}