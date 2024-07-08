#include <vector>
#include <cmath>

int sum_squares(std::vector<int> lst){
    int result = 0;
    for(int i = 0; i < lst.size(); i++){
        if(i % 3 == 0 && i % 4 != 0){
            result += lst[i] * lst[i];
        } else if(i % 4 == 0 && i % 3 != 0){
            result += pow(lst[i], 3);
        }
    }
    return result;
}

int main() {
    std::vector<int> input;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        int temp;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> temp;
        input.push_back(temp);
    }
    
    int output = sum_squares(input);
    
    std::cout << "Sum of squares: " << output << std::endl;

    return 0;
}