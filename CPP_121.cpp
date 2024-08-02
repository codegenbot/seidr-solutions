#include <vector>

int main() {
    std::vector<int> lst;
    int sum = 0;
    int num;
    
    while (true) {
        std::cout << "Enter a number (-1 to finish): ";
        std::cin >> num;
        
        if (num == -1) {
            break;
        }
        
        lst.push_back(num);
    }
    
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    
    std::cout << "Sum of odd numbers: " << sum << std::endl;
    
    return 0;
}