#include <vector>
#include <algorithm>

vector<int> remove_duplicates(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> numbers = {3, 1, 2, 2, 3};
    vector<int> expected = {1, 2, 3};
    
    vector<int> result = remove_duplicates(numbers);
    
    if (issame(result, expected)) {
        return 1;
    } else {
        return 0;
    }
}