```cpp
int main {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 2, 3, 4, 5};
    std::vector<int> result = remove_duplicates(numbers);
    for (int num : result) {
        std::cout << num << " ";
    }
}