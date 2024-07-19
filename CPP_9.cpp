#include <vector>
#include <algorithm>
#include <cassert>

namespace std {
    bool issame(vector<int> a, vector<int> b) {
        return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
    }

    vector<int> rolling_max(vector<int> numbers) {
        vector<int> result;
        int max_num = numbers[0];
        result.push_back(max_num);
        for(int i = 1; i < numbers.size(); i++){
            max_num = std::max(max_num, numbers[i]);
            result.push_back(max_num);
        }
        return result;
    }
}

int main(){
    assert(std::issame(std::rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}