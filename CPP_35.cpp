#include <algorithm>
#include <vector>

int calculateMax() {
    std::vector<int> my_vector;
    my_vector.push_back(5);
    my_vector.push_back(3);
    my_vector.push_back(-5);
    my_vector.push_back(2);
    my_vector.push_back(-3);
    my_vector.push_back(3);
    my_vector.push_back(9);
    my_vector.push_back(0);
    my_vector.push_back(124);
    my_vector.push_back(1);
    my_vector.push_back(-10);
    int max_val = *std::max_element(my_vector.begin(), my_vector.end());
    return std::abs(max_val);
}