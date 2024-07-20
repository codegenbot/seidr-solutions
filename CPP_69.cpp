#include <vector>
#include <algorithm>

using namespace std;

int count(int n) {
    int cnt = 0;
    for (int i : {1, 2, ..., n}) {
        if (i % n == 0)
            cnt++;
    }
    return cnt;
}

int search(vector<int> lst) {
    int max = 0;
    for (int i : lst) {
        if (i > 0 && i >= count(i)) {
            max = i;
        }
    }
    return max == 0 ? -1 : max;
}

int main() {
    assert(search({3, 10, 10, 9, 2}) == -1);
    return 0;
}