#include <vector>
using namespace std;

int solve(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = (i / 3);
        if (temp < 1)
            temp = 0;
        else
            temp -= 2;
        sum += temp;
    }
    return sum;
}