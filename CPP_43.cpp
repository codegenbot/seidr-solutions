#include <vector>
#include <algorithm>
#include <set>

using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    set<int> numbers(l.begin(), l.end());
    for (int i = 0; i < numbers.size(); i++) {
        int complement = -numbers[i];
        if (find(numbers.begin() + i + 1, numbers.end(), complement) != numbers.end()) {
            return true;
        }
    }
    return false;
}