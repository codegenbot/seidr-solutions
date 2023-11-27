#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
#include <cassert>

std::vector<int> sort_array(std::vector<int> arr);
bool is_same(const std::vector<int>& a, const std::vector<int>& b);

std::vector<int> sort_array(std::vector<int> arr){
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        int countA = std::bitset<32>(a).count();
        int countB = std::bitset<32>(b).count();
        if (countA == countB) {
            return a < b;
        }
        return countA < countB;
    });
    return arr;
}

bool is_same(const std::vector<int>& a, const std::vector<int>& b){
    if(a.size() != b.size())
        return false;

    for(int i=0; i<a.size(); i++){
        if(a[i]!=b[i])
            return false;
    }
    return true;
}

int main(){
    assert(is_same(sort_array({2,4,8,16,32}) , {2, 4, 8, 16, 32}));
    return 0;
}