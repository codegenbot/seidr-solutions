#include <vector>

bool issame(vector<int> a,vector<int>b){
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int left = min(total - 1000, remaining);
    if (left < 0) {
        return {total, 0};
    } else {
        return {total, max(remaining - left, 0)};
    }
}