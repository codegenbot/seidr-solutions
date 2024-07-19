```cpp
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
    std::vector<int> list;
    int num;

    // Read input from user
    while(true) {
        std::cout << "Enter a number (or -1 to stop): ";
        std::cin >> num;
        if(num == -1)
            break;
        list.push_back(num);
    }

    // Print the sum of even numbers
    int result = add(list);
    std::cout << "Sum of even numbers: " << result << std::endl;

    return 0;
}