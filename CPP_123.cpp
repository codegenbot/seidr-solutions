#include <vector>
#include <initializer_list>

bool isSame(std::vector<int> v1, std::vector<int> v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

int get_odd_collatz(int n) {
    std::vector<int> sequence;
    
    while(n != 1) {
        if(n % 2)
            n = 3*n + 1;
        else
            n /= 2;
        
        sequence.push_back(n);
    }
    
    for(auto num : sequence) {
        std::cout << num << " ";
    }
    
    std::cout << std::endl;
}

int main() {
    int num;
    std::cin >> num;
    get_odd_collatz(num);
    assert(isSame(get_odd_collatz(1) , {1}));
}