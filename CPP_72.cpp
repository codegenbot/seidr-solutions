```cpp
#include <vector>
#include <string>
#include <algorithm>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    if (str != std::string(str.rbegin(), str.rend())) {
        return false;
    }
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

int main() {
    std::vector<int> q = {1,2,3};
    int w = 6;
    if(will_it_fly(q, w)) {
        std::cout << "The plane will fly." << std::endl;
    } else {
        std::cout << "The plane won't fly." << std::endl;
    }
    return 0;
}