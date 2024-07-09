```cpp
#include <vector>
#include <initializer_list>

bool isSame(std::vector<int> a, std::vector<int> b) {
    return (a == b);
}

int get_odd_collatz(int n) {
    std::vector<int> sequence;
    
    int i = 0;
    
    while(n != 1 && i < 49) {
        if(n % 2)
            n = 3*n + 1;
        else
            n /= 2;
        
        sequence.push_back(n);
        i++;
    }
    
    for(int j = 0; j < i; j++) {
        std::cout << sequence[j] << " ";
    }
    
    std::cout << std::endl;
}

int solver() {
    int num;
    std::cin >> num;
    get_odd_collatz(num);
}