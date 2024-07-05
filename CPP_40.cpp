#include <vector>
#include <algorithm>

bool triples_sum_to_zero(std::vector<int> l){
    int n = l.size();
    if (n < 3) return false;
    std::sort(l.begin(), l.end());
    for (int i = 0; i < n - 2; ++i) {
        int left = i + 1, right = n - 1;
        while (left < right) {
            int sum = l[i] + l[left] + l[right];
            if (sum == 0) return true;
            else if (sum < 0) ++left;
            else --right;
        }
    }
    return false;
}

int main() {
    assert(triples_sum_to_zero({100, 3, 5, -100}) == false);
    return 0;
}