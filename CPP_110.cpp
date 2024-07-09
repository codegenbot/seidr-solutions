#include <vector>
#include <string>

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    bool foundOdd = false;
    for (int num : lst1) {
        if (num % 2 != 0) {
            foundOdd = true;
            break;
        }
    }
    if (!foundOdd) return "YES";
    for (int num : lst2) {
        if (num % 2 == 0) {
            int foundOddInLst1 = 0;
            for (int num2 : lst1) {
                if (num2 % 2 != 0) {
                    foundOddInLst1++;
                    break;
                }
            }
            if (foundOddInLst1 == 0) return "NO";
        }
    }
    return "YES";
}

int main() {
    assert(exchange({100, 200}, {200, 200}) == "YES");
    std::vector<int> lst1 = {1,2,3};
    std::vector<int> lst2 = {4,5};
    if (exchange(lst1, lst2) == "NO") {
        std::cout << "Test failed: " << exchange(lst1, lst2) << std::endl;
    } else {
        std::cout << "Test passed" << std::endl;
    }
    
    return 0;
}