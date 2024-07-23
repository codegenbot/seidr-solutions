#include <iostream>
#include <vector>

int add(std::vector<int> lst){
    int sum = 0;
    for(int i = 1; i < lst.size(); i++){
        if(i % 2 != 0)
            sum += lst[i];
    }
    return sum;

}

int main() {
    std::vector<int> numbers;
    int num;

    std::cout << "Enter some numbers (enter -1 when you are done):" << std::endl;

    do{
        std::cin >> num;
        numbers.push_back(num);
    } while(num != -1);

    int result = add(numbers);
    std::cout << "Sum of odd-indexed numbers: " << result << std::endl;

    return 0;
}