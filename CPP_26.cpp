int main() {
    std::vector<int> test1 = remove_duplicates({1, 2, 3, 2, 4, 3, 5});
    std::vector<int> test2 = {1, 2, 3, 4, 5};
    if (issame(test1, test2)) {
        for (int x : test1) {
            std::cout << x << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Test failed" << std::endl;
    }
    return 0;
}