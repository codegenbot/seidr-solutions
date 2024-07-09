#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size();i++)
        if(a[i] != b[i])
            return false;
    return true;
}

std::vector<int> maximum(std::vector<int> arr,int k){
    std::vector<int> res(k);
    std::partial_sort(arr.begin(), arr.begin()+k, arr.end(), std::greater<int>());
    std::copy(arr.begin(), arr.begin()+k, res.begin());
    return res;
}

int main(){
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 3) , {0, 2, 243}));
    return 0;
}