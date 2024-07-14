#include <vector>
using namespace std;

int basementIndex(vector<int> v) {
    int sum = 0;
    for (int i = 0; ; i++) {
        sum += v[i];
        if (sum < 0)
            return i;
    }
}