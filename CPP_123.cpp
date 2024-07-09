#include <vector>
#include <initializer_list>

bool isSame(std::vector<int> a, std::vector<int> b) {
    return (a == b);
}

int get_odd_collatz(int n) {
    int sequence[50] = {0};
    int i = 0;
    
    while(n != 1 && i < 49) {
        if(n % 2)
            n = 3*n + 1;
        else
            n /= 2;
        
        sequence[i++] = n;
    }
    
    for(int j = 0; j < i; j++) {
        std::cout << sequence[j] << " ";
    }
    
    std::cout << std::endl;
}

int main() {
    int num;
    std::cin >> num;
    get_odd_collatz(num);
}