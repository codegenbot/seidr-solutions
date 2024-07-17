#include <iostream>
#include <vector>
#include <string>

int main() {
    int text = 10920; 
    int target = 346266;
    
    std::vector<int> result;
    char* textChar = (char*)&text;
    char* targetChar = (char*)&target;
    for (int i = 0; i <= sizeof(int)*text - sizeof(int)*target; i++) {
        if (std::equal(textChar + i, textChar + i + sizeof(int)*target, targetChar, sizeof(int))) {
            result.push_back(i);
        }
    }

    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}