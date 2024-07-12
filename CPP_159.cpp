#include <vector>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int left = max(0, remaining - (need - number));
    return {total, left};
}