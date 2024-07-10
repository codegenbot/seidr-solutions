#include <algorithm>
#include <cassert>
#include <vector>

using namespace std;

int main() {
    vector<int> lst = {1, 2, 3, 4};
    return is_sorted(lst.begin(), lst.end()) && (unique(lst.begin(), lst.end()) == lst.end());
}