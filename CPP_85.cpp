#include <iostream>
#include <vector>

int add(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> lst(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        int num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        lst[i] = num;
    }

    for(int i = 1; i < lst.size(); i += 2){
        if(lst[i] % 2 == 0)
            sum += lst[i];
    }
    std::cout << "Sum of even elements: " << sum << std::endl;

    return 0;
}