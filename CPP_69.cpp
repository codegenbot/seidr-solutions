```cpp
#include <iostream>
#include <vector>
#include <map>

int search(std::vector<int> lst) {
    std::map<int, int> count;
    for (int num : lst) {
        if (count.find(num) == count.end()) {
            count[num] = 1;
        } else {
            count[num]++;
        }
    }

    int maxVal = -1;
    int maxFreq = 0;
    for (auto p : count) {
        if(p.second > maxFreq) {
            maxFreq = p.second; 
            maxVal = p.first; 
        }
    }

    return maxVal;
}

int main() {
    std::vector<int> lst;
    int num;

    std::cout << "Enter numbers (0 to stop): ";
    while ((std::cin >> num) && (num != 0)) {
        lst.push_back(num);
    }

    std::cout << "The number with the highest frequency is: " << search(lst) << std::endl;
    
    return 0;
}