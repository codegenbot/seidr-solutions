#include <vector>
#include <algorithm>

using namespace std;

int count(int i) {
    int c = 0;
    for (int j : {1, 2, 3, 4, 5}) {
        if (j <= i) {
            c++;
        }
    }
    return c;
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