#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& l){
    std::vector<int> res = l;

    auto sort_third = [](std::vector<int>::iterator start, std::vector<int>::iterator end){
        std::sort(start, end);
    };

    for (int i = 0; i < res.size(); ++i){
        if (i % 3 == 0){
            sort_third(res.begin() + i, res.begin() + i + 3);
        }
    }

    return res;
}