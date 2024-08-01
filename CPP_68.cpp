#include <iostream>
#include <vector>

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    if(arr.empty()) return result;

    int smallest_even = INT_MAX;
    int index_smallest_even = -1;
    
    for(int i=0; i<arr.size(); i++) {
        if(arr[i]%2==0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            index_smallest_even = i;
        }
    }

    result.push_back(smallest_even);
    result.push_back(index_smallest_even);

    return result;
}

int main() {
    std::vector<int> input;
    int num;
    
    while(std::cin >> num) {
        input.push_back(num);
    }
    
    std::vector<int> output = pluck(input);
    
    if(output.size() == 2) {
        std::cout << "Smallest even number: " << output[0] << std::endl;
        std::cout << "Index of the smallest even number: " << output[1] << std::endl;
    } else {
        std::cout << "No even numbers found." << std::endl;
    }
    
    return 0;
}