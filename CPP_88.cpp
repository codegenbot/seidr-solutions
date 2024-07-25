#include <cassert>
#include <vector>
#include <algorithm>
#include <functional>

using std::vector;

namespace ArrayUtils {
    bool issame(vector<int> a, vector<int> b){
        if(a.size() != b.size()) return false;
        for(int i = 0; i < a.size(); ++i){
            if(a[i] != b[i]) return false;
        }
        return true;
    }

    vector<int> sort_array(vector<int> array){
        if(array.empty()) return array;
        if((array.front() + array.back()) % 2 == 0)
            std::sort(array.begin(), array.end(), std::greater<int>());
        else
            std::sort(array.begin(), array.end());
        return array;
    }
}

using ArrayUtils::issame;
using ArrayUtils::sort_array;

int main() {
    assert(issame(sort_array(vector<int>({21, 14, 23, 11})), vector<int>({23, 21, 14, 11}));
    return 0;
}