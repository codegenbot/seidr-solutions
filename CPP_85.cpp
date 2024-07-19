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
    std::vector<int> numbers;
    int num;
    
    std::cout << "Enter numbers (negative to stop): ";
    while (std::cin >> num) {
        if(num < 0) break;
        numbers.push_back(num);
    }
    
    int result = add(numbers);
    std::cout << "Sum of even numbers: " << result << std::endl;
    
    return 0;
}