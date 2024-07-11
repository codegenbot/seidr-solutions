#include <algorithm>
int main() {
    std::list<std::pair<int, int>> l = {{1,2},{3,4}};
    return std::max_element(l.begin(), l.end())->first;
}