#include <vector>
using namespace std;

int search(vector<int> lst) {
    int max = -1;
    for (int num : lst) {
        if (num > 0 && num <= count(num)) {
            max = num;
        }
    }
    return max;
}