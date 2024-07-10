#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

std::vector<float> derivative(std::vector<float> xs) {
    std::vector<float> result;
    for (std::size_t i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] - xs[i - 1]);
    }
    return result;
}