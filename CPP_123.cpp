#include <vector>
#include <initializer_list>

bool areSequencesEqual(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i])
            return false;
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