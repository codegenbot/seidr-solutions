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
    
    // input number of elements
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    // input all the elements
    for(int i = 0; i < n; ++i) {
        int num;
        std::cout << "Enter element " << (i + 1) << ": ";
        std::cin >> num;
        lst.push_back(num);
    }
    
    std::cout << "The sum of even elements: " << add(lst) << std::endl;

    return 0;
}