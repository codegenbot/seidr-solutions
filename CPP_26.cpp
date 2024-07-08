#include <algorithm>
#include <vector>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b);  

vector<int> remove_duplicates(const vector<int>& numbers) {
    vector<int> result;
    for (int num : numbers) {
        if (find(result.begin(), result.end(), num) == result.end()) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return (std::equal(a.begin(), a.end(), b.begin(), b.end()));
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    return 0;
}