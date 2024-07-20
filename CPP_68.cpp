#include <iostream>
#include <vector>

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    if(arr.empty()) return result;

    int min_even = INT_MAX;
    int min_index = -1;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % 2 == 0 && arr[i] < min_even){
            min_even = arr[i];
            min_index = i;
        }
    }

    result.push_back(min_even);
    result.push_back(min_index);

    return result;
}

int main() {
    std::vector<int> input;
    int num;

    while(std::cin >> num) {
        input.push_back(num);
    }

    // Call the pluck function
    std::vector<int> output = pluck(input);

    for(int i = 0; i < output.size(); i++) {
        if(i % 2 == 0)
            std::cout << "Even number: " << output[i] << std::endl;
        else
            std::cout << "Index of even number: " << output[i] << std::endl;
    }

    return 0;
}

int issame(int a, int b) {
    // Your code here
}