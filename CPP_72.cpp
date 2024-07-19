```cpp
#include <vector>
#include <string>
#include <algorithm>
#include <numeric> 
bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    bool balanced = str == std::stoi(str);
    return balanced && std::accumulate(q.begin(), q.end(), 0) <= w;
}

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    bool balanced = str == std::stoi(str);
    return balanced && std::accumulate(q.begin(), q.end(), 0) <= w;
}