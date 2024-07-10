#include <vector>
#include <algorithm>
using namespace std;

vector<int> remove_duplicates(vector<int> numbers);

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}