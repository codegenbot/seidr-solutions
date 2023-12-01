#include <vector>

int solutions(vector<int> lst){
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 2 == 0 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    // Test cases
    std::vector<int> test1 = {1, 2, 3, 4, 5};
    std::vector<int> test2 = {2, 4, 6, 8};
    std::vector<int> test3 = {1, 3, 5, 7, 9};
    
    int result1 = solutions(test1);
    int result2 = solutions(test2);
    int result3 = solutions(test3);
    
    // Print the results
    std::cout << "Result 1: " << result1 << std::endl;
    std::cout << "Result 2: " << result2 << std::endl;
    std::cout << "Result 3: " << result3 << std::endl;
    
    return 0;
}