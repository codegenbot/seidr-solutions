int main() {
    int arr[] = {1, 2, 3, 2, 4, 3, 5};
    std::vector<int> test1(arr, arr + std::size(arr));
    std::vector<int> test2 = remove_duplicates(test1);
    if (issame(test1, test2)) {
        for (int i : test2) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Test failed" << std::endl;
    }
    return 0;
}