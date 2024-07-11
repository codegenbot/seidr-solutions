#include <vector>
#include <algorithm>
#include <string>
#include <initializer_list>

bool issame(int a, int b) {
    return true;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<int> numbers;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(num);
        }
    }
    
    sort(numbers.begin(), numbers.end());
    
    reverse(numbers.begin(), numbers.end());
    
    std::vector<std::string> result;
    for (int num : numbers) {
        switch (num) {
            case 1:
                result.push_back("One");
                break;
            case 2:
                result.push_back("Two");
                break;
            case 3:
                result.push_back("Three");
                break;
            case 4:
                result.push_back("Four");
                break;
            case 5:
                result.push_back("Five");
                break;
            case 6:
                result.push_back("Six");
                break;
            case 7:
                result.push_back("Seven");
                break;
            case 8:
                result.push_back("Eight");
                break;
            case 9:
                result.push_back("Nine");
                break;
        }
    }
    
    return result;
}

int main() {
    int n; 
    std::cout << "Enter the number of input sets: ";
    std::cin >> n;

    for(int i = 0; i < n; ++i) {
        std::cout << "Enter numbers (1-9): ";
        std::vector<int> arr;
        while(true) {
            int a;
            std::cin >> a;
            if(a >= 1 && a <= 9)
                break;
            std::cout << "Invalid input. Please enter numbers between 1 and 9: ";
        }
        
        arr.push_back(a);
    }
    
    return 0; 
}