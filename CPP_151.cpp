```cpp
int double_the_difference(std::vector<int> lst) {
    int odd_sum = 0; 
    for (auto x : lst) { 
        if (x % 2 != 0) { 
            odd_sum += x; 
        } 
    }
    return std::abs(odd_sum - (std::accumulate(lst.begin(), lst.end(), 0) - odd_sum));
}

int main() {
    std::vector<int> lst = {1, 2, 3}; 
    int result = double_the_difference(lst); 
    assert(result == 5); 
    return 0;
}