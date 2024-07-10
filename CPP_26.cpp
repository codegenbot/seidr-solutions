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
    vector<int> numbers = {1, 2, 3, 2, 4, 5, 1};
    vector<int> expected = {1, 2, 3, 4, 5};
    
    vector<int> result = remove_duplicates(numbers);
    
    if (issame(result, expected)) {
        return 1;
    } else {
        return 0;
    }
}