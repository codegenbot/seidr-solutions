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
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int result = add(numbers);
    std::cout << "The sum of the even elements is: " << result << std::endl;
    return 0;
}