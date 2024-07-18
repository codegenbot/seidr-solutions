#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> remove_duplicates(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    // Your main function code here
    return 0;
}