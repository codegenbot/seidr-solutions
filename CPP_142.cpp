```cpp
int main() {
    std::vector<int> inputVector; 
    int n; 

    std::cout << "Enter the number of elements in the vector: ";
    std::cin >> n;

    for(int i = 0; i < n; ++i) {
        int num;
        while(true) {
            std::cout << "Enter element " << i + 1 << ": ";
            std::cin >> num;
            
            if (num >= 0 && num <= 100) {
                inputVector.push_back(num);
                break;
            } else {
                if(i < n-1){
                    std::cerr << "Invalid input. Please enter a number between 0 and 100." << std::endl;
                }else{
                    std::cerr << "You've reached the maximum capacity of your vector!" << std::endl;
                    return 0; 
                }
            }
        }
        
        if(inputVector.size() == n) {
            break; // Exit loop once maximum capacity is reached
        }
    }

    int result = sum_squares(inputVector);
    std::cout << "Sum of squares is: " << result << std::endl;

    return 0;
}