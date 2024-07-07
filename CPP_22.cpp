#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

bool equalVectors(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), [](int x, int y){return x == y;});
}

std::vector<int> filter_integers(std::list<int> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(value >= 0 && value <= 255) {
            result.push_back(value);
        }
    }
    return result;
}