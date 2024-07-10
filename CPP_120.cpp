int main {
    std::vector<int> input = {1, 2, 3, -23, 243, -400, 0};
    int k = 4;
    if (maximum(input, k).size() != 0) {
        for (int i : maximum(input, k)) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "No elements left" << std::endl;
    }
    return 0;
}