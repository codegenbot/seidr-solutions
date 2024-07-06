#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    if (total > remaining) {
        return {total, 0};
    } else {
        int left = remaining - (total - number);
        return {(int)total, left};
    }
}