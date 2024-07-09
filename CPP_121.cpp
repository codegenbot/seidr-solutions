```cpp
#include <iostream>
#include <vector>

int solution(std::vector<int> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 2 == 1 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> lst;
    int num;
    
    for(int i = 0; ; i++) {
        std::cout << "Enter number (" << (i+1) << "/): ";
        std::cin >> num;
        
        if(num == -1)
            break;
            
        lst.push_back(num);
    }
    
    if(!lst.empty())
        std::cout << "Sum of odd numbers in odd positions: " << solution(lst) << std::endl;
    else
        std::cout << "No numbers entered." << std::endl;

    return 0;
}