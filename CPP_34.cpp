#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_copy(l.begin(), l.end()));
    return result;
}

int main() {
    // test your function here
    vector<int> v = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    for (auto i : unique(v)) {
        printf("%d ", i);
    }
    return 0;
}