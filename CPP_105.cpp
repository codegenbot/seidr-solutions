#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> result;
    for(int num : arr){
        switch(num){
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
            case 7:
                result.push_back("Seven");
                break;
            case 9:
                result.push_back("Nine");
                break;
            default:
                break;
        }
    }
    return result;
}

int main() {
    std::vector<int> arr = {3, 1, 7, 4, 2, 9};
    std::vector<std::string> expected_result = {"Nine", "Seven", "Four", "Three", "Two", "One"};

    std::vector<std::string> result = by_length(arr);

    assert(issame(result, expected_result));

    return 0;
}