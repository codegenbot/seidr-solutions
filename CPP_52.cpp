```cpp
bool below_threshold(std::vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true; 
}

int main() {
    assert(not(below_threshold({1, 8, 4, 10}, 10)));
    std::cout << below_threshold({1, 2, 3, 6}, 5) << std::endl;
}