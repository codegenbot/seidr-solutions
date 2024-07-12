```cpp
#include <vector>
#include <string>

bool will_it_fly(std::vector<std::vector<int>>& q, int w) {
    std::string str = "";
    for(int i : q[0]) {
        str += to_string(i);
    }
    if(str != std::string(str.rbegin(), str.rend()).s)
        return false;
    int sum = 0;
    for(int i : q[0]) {
        sum += i;
    }
    return sum <= w;
}

int main() {
    assert (will_it_fly(std::vector<std::vector<int>>{{5}}, 5) == true);
    return 0;
}