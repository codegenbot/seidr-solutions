#include <vector>
using namespace std;

int basement(const vector<int>& v) {
    int sum = 0;
    for (int i = 0; ; i++) {
        sum += v[i];
        if (sum < 0)
            return i;
    }
}