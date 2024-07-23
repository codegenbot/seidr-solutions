#include <vector>
#include <algorithm>
#include <bitset>

int main() {
    std::vector<int> arr = {2,4,8,16,32};
    int res = sort_array(arr).size();
    assert(issame(arr, sort_array(arr)));
    return res;
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b){
        if (std::bitset<32>(a).count() != std::bitset<32>(b).count())
            return std::bitset<32>(a).count() < std::bitset<32>(b).count();
        else
            return a < b;
    });
    return arr;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}