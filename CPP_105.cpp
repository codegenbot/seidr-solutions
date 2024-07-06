#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a == b)
        return true;
    else
        return false;
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
    std::vector<int> input;
    int num;

    // Read integers from the user until the user decides to stop.
    while (true) {
        std::cout << "Enter a number between 1 and 9. To finish, type -1.\n";
        std::cin >> num;

        if (num == -1)
            break;
        input.push_back(num);
    }

    // Process the numbers in the vector.
    std::vector<std::string> output = by_length(input);

    // Print out the processed list.
    for(std::string str : output) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    return 0;
}