#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& l) {
    std::vector<int> res = l;
    
    auto sort_third = [](int i, std::vector<int>& res) {
        std::sort(res.begin() + i, res.begin() + i + 3);
    };
    
    for (int i = 0; i < l.size(); ++i){
        if (i % 3 == 0){
            sort_third(i, res);
        }
    }
    
    return res;
}