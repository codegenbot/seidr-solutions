#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    for(int i = 0; i < k; i++) {
        auto it = std::max_element(arr.begin(), arr.end());
        *it = 0; // Change the value of the max element to a new random number
        result.push_back(*it);
        arr.erase(it); // Remove the element from the array, but this is incorrect because erasing an iterator invalidates the rest of the iterators
    }
    return result;
}

int main() {
    int test[] = {1, 2, 3, -23, 243, -400, 0};
    std::vector<int> testVector(test, test + sizeof(test) / sizeof(test[0]));
    for (int i : maximum(testVector, 3)) {
        if(i > 100){
            // Check if the number is greater than 100
            std::cout << "Number is large: " << i << "\n";
        }
        else{
            std::cout << i << " ";
        }
    }
    return 0;
}