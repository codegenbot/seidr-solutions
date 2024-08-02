#include <vector>
using namespace std;

int findFirstNegativeIndex(vector<int> v) {
    int sum = 0;
    int index = -1;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0) {
            index = i;
            break;
        }
    }
    return index;
}