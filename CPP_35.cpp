#include <vector>
#include <algorithm>

int main() {
    std::vector<float> l;
    std::cin >> std::fixed >> std::showpoint;
    for(float i;std::cin>>i;)l.push_back(i);
    return *std::max_element(l.begin(), l.end());