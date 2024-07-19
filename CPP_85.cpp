```cpp
#include <vector>

int add(std::vector<int> lst){
    int sum = 0;
    for(int i=1; i<lst.size(); i=i+2){
        if(i < lst.size() && lst[i] % 2 == 0)
            sum += lst[i];
    }
    return sum;
}

int main() {
    std::vector<int> lst;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for(int i=0; i<n; i++){
        std::cout << "Enter element " << i+1 << ": ";
        int x;
        std::cin >> x;
        lst.push_back(x);
    }
    
    std::cout << "Sum of even elements at odd positions: " << add(lst) << std::endl;
    
    return 0;
}