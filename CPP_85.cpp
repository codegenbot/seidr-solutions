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
    int num;
    std::cout << "Enter the number of elements: ";
    std::cin >> num;
    
    for(int i=1; i<=num; i++) {
        std::cout << "Element " << i << ": ";
        std::cin >> lst.push_back(i);
    }
    
    int result = add(input);
    std::cout << "The sum of the even elements is: " << result << std::endl;
    
    return 0;
}