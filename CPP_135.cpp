#include <vector>
#include <iostream>

int can_arrange(std::vector<int> arr) {
    for(int i=1; i<arr.size(); i++){
        if(arr[i] <= arr[i-1])
            return i;
    }
    return -1;
}

int main() {
    int result = 0; 
    std::cout << "Please enter some numbers: ";
    std::vector<int> arr;
    for(int i=1; i<=3; i++){
        int input;
        std::cin >> input;
        arr.push_back(input);
    }
    std::cout << "Array after insertion: ";
    for(int i=0; i<arr.size(); i++){
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
    result = can_arrange(arr); 
    if(result == -1)
        std::cout << "The numbers cannot be arranged.";
    else
        std::cout << "The first number that should come after is: " << result;
    return 0;
}