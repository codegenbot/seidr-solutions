#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_element(l.begin(), l.end()));
    return result;
}

int main() {
    vector<int> numbers = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> result = unique(numbers);
    for (auto i : result) {
        printf("%d ", i);
    }
    return 0;
}