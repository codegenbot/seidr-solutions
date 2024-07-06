```cpp
#include <vector>
#include <algorithm>

bool same(vector<int> a,vector<int> b){
    return (a.size() == b.size()) && (std::all_of(a.begin(), a.end(), 
      [&b](int x){return std::find(b.begin(), b.end(), x) != b.end();}));
}

int main(){
    assert(same(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    return 0;
}

vector<int> largest_smallest_integers(vector<int> lst) {
    int max_negative = 0, min_positive = INT_MAX;
    for (int num : lst) {
        if (num < 0 && num > max_negative) {
            max_negative = num;
        }
        else if (num > 0 && num < min_positive) {
            min_positive = num;
        }
    }
    return {(max_negative > 0 ? 0 : max_negative), (min_positive > 0 ? 0 : min_positive)};
}