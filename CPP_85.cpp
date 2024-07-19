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
    std::vector<int> input;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for(int i=0; i<n; i++){
        int val;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> val;
        input.push_back(val);
    }
    
    std::cout << "Sum of even elements at odd indices: " << add(input) << std::endl;
    
    return 0;
}