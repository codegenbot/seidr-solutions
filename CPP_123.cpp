#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

std::vector<int> get_odd_collatz(int n){
    std::vector<int> collatz_seq;
    collatz_seq.push_back(n);
    while(n != 1){
        if(n % 2 == 0){
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        collatz_seq.push_back(n);
    }
    std::vector<int> odd_collatz_seq;
    for(int num : collatz_seq){
        if(num % 2 != 0){
            odd_collatz_seq.push_back(num);
        }
    }
    std::sort(odd_collatz_seq.begin(), odd_collatz_seq.end());
    return odd_collatz_seq;
}

int main(){
    assert (issame(get_odd_collatz(1) , {1}));
    return 0;
}