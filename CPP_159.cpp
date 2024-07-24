#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    vector<int> result;
    int total = number + need;
    if (total > remaining) {
        total -= (total - remaining);
    }
    result.push_back(total);
    result.push_back(remaining - total);
    return result;
}