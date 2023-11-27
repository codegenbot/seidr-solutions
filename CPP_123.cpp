#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> get_odd_collatz(int n);
bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> get_odd_collatz(int n){
    std::vector<int> collatz_seq;
    collatz_seq.push_back(n);
    while(n > 1){
        if(n % 2 == 0){
            n = n / 2;
        }else{
            n = (3 * n) + 1;
        }
        collatz_seq.push_back(n);
    }
    std::vector<int> odd_nums;
    for(int i = 0; i < collatz_seq.size(); i++){
        if(collatz_seq[i] % 2 == 1){
            odd_nums.push_back(collatz_seq[i]);
        }
    }
    std::sort(odd_nums.begin(), odd_nums.end());
    return odd_nums;
}

bool issame(std::vector<int> a, std::vector<int> b) {
  return a == b;
}

int main()
{
    assert (issame(get_odd_collatz(1) , std::vector<int>({1})));
    return 0;
}