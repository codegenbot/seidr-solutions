#include <algorithm>
#include <vector>

int main() {
    std::vector<int> l;
    l.push_back(5);
    l.push_back(3);
    l.push_back(-5);
    l.push_back(2);
    l.push_back(-3);
    l.push_back(3);
    l.push_back(9);
    l.push_back(0);
    l.push_back(124);
    l.push_back(1);
    l.push_back(-10);

    int result = *std::max_element(l.begin(), l.end());
    return result;
}