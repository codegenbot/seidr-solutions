#include <vector>
#include <algorithm>
#include <map>

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<int> temp;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            temp.push_back(i);
        }
    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    
    std::map<int, std::string> numbers = {{1, "One"}, {2, "Two"}, {3, "Three"}, 
                                            {4, "Four"}, {5, "Five"}, {6, "Six"}, 
                                            {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    
    std::vector<std::string> result;
    for (int i : temp) {
        result.push_back(numbers[i]);
    }
    return result;
}