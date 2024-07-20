#include <vector>
#include <algorithm>

using namespace std;

int count(int i) {
    int c = 0;
    while (i > 0) {
        i /= 10;
        c++;
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