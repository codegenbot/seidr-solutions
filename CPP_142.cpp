```cpp
#include <iostream>
#include <vector>

int sum_squares(std::vector<int> lst){
    int total = 0;
    for(int i=0; i<lst.size(); i++){
        if(i%3==0 && i%4!=0)
            total += lst[i]*lst[i];
        else if(i%4==0 && i%3!=0)
            total += lst[i]*lst[i]*lst[i];
    }
    return total;
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the vector: ";
    std::cin >> n;

    std::vector<int> vec(n);
    
    for(int i = 0; i < n; i++) {
        std::cout << "Element " << (i+1) << ": ";
        std::cin >> vec[i];
    }

    int result = sum_squares(vec);

    std::cout << "The sum of the squares is: " << result << std::endl;

    return 0;
}