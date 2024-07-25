#include <vector>
using namespace std;

int search(vector<int> lst) {
    int max = -1;
    for (int i : lst) {
        if (i > 0 && i <= count(lst.begin(), lst.end(), i)) {
            max = i;
        }
    }
    return max;
}