```
#include <initializer_list>
#include <cassert>
#include <vector>
#include <string>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    if (str != std::string(str.rbegin(), str.rend())) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

int main() {
    std::vector<int> q = {5, 10, 15};
    if (!will_it_fly(q, 20)) {
        std::cout << "The quadcopter will not fly." << std::endl;
    } else {
        std::cout << "The quadcopter will fly." << std::endl;
    }
    return 0; 
}