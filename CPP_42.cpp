#include <vector>

using namespace std;

vector<int> incr_list(vector<int> l) {
    vector<int> result;
    for (int i : l) {
        result.push_back(i + 1);
    }
    return result;
}

int main() {
    assert(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}) == vector<int>({6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}