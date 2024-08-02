#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<int> a,vector<int>b) { return a == b; }

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> unique_numbers;
    for (int number : numbers) {
        if (find(unique_numbers.begin(), unique_numbers.end(), number) == unique_numbers.end()) {
            unique_numbers.push_back(number);
        }
    }
    return unique_numbers;
}

int main() {
    assert(remove_duplicates({1, 2, 3, 2, 4, 3, 5}) == vector<int>({1, 4, 5}));
    return 0;
}