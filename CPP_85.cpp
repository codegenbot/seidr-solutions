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
    std::vector<int> numbers = {1, 3, 4, 5, 6};
    int result = add(numbers);
    std::cout << "The sum is: " << result << std::endl;
    return 0;
}