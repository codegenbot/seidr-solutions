#include <vector>
#include <initializer_list>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a == b);
}

int getOddCollatz(int n) {
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
    getOddCollatz(num);
}