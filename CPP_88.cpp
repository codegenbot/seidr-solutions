#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a,vector<int> b) {
    return a == b;
}

vector<int> sort_array(vector<int> array) {
    if (array.empty()) {
        return array;
    }
    if (array[0] + array.back() % 2 == 1)
        return array;
    else
        return vector<int>(array.rbegin(), array.rend());

}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}), {11, 14, 21, 23}));
    return 0;
}