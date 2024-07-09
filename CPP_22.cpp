#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int filter_integers(std::vector<int> v) {
    std::vector<int> result;
    for (int num : v) {
        if (std::holds_alternative<int>(num)) {
            result.push_back(std::get<int>(num));
        }
    }
    return 0;
}