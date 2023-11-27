#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining);

bool issame(vector<int> a, vector<int> b);

vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + need;
    int left = remaining - need;
    if (left < 0) {
        left = 0;
    }
    return {totalEaten, left};
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}