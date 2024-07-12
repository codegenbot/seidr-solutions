```cpp
#include <vector>
#include <string>

bool will_it_fly(std::vector<std::vector<int>>& q, int w) {
    std::string str = "";
    for(int i : q[0]) {
        str += std::to_string(i);
    }
    if(str != std::string(str.rbegin(), str.rend())) 
        return false;
    int sum = 0;
    for(int i : q[0]) {
        sum += i;
    }
    return sum <= w;
}

int main() {
    std::vector<std::vector<int>> q = {{5}};
    assert(will_it_fly(q, 5) == true);
    return 0;
}