```
#include <iostream>
#include <vector>

int add(std::vector<int> lst){
    int sum = 0;
    for(int i = 1; i < lst.size(); i += 2){
        if(lst[i] % 2 == 0)
            sum += lst[i];
    }
    return sum;

}

int main() {
    std::vector<int> lst;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++){
        int num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        lst.push_back(num);
    }
    
    std::cout << "Sum of even elements: " << add(lst) << std::endl;

    return 0;
}