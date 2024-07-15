#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    // Function definition remains the same
}

std::vector<std::string> by_length(std::vector<int> arr){
    std::vector<std::string> names = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    std::vector<int> sorted_arr;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sorted_arr.push_back(num);
        }
    }
    sort(sorted_arr.begin(), sorted_arr.end());
    reverse(sorted_arr.begin(), sorted_arr.end());
    std::vector<std::string> result;
    for (int num : sorted_arr) {
        result.push_back(names[num - 1]);
    }
    return result;
}