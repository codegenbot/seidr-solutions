#include <vector>
#include <string>

bool will_it_fly(std::vector<std::vector<int>>& q, std::vector<std::vector<int>> w) {
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
    return sum <= w[0][0];
}

int main() {
    std::vector<int> q = {5};
    assert(will_it_fly(q, {{1,5}}) == true);
    return 0;
}