#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if(v1.size() != v2.size())
        return false;
    for(int i=0; i<v1.size(); i++)
        if(v1[i] != v2[i])
            return false;
    return true;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::map<int, std::string> numToName = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, 
                                             {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    std::vector<std::string> result;
    for(int i : arr){
        if(i >= 1 && i <= 9)
            result.push_back(numToName[i]);
    }
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    std::vector<int> input = {2, 4, 6};
    std::vector<std::string> output = by_length(input);
    
    if(issame(output, {"Two", "Four", "Six"}))
        std::cout << "Test passed\n";
    else
        std::cout << "Test failed\n";
    
    return 0;
}