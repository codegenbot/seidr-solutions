#include <vector>
#include <algorithm>

bool is_sorted(vector<int> lst){
    return std::is_permutation(lst.begin(), lst.end());
}