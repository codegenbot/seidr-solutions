int main() {
    std::vector<int> arr;
    int num;
    while (true) {
        std::cout << "Enter a number (-1 to stop): ";
        std::cin >> num;
        if (num == -1)
            break;
        arr.push_back(num);
    }
    int result = smallest_change(arr);
    std::cout << "Smallest number of changes: " << result << std::endl;
    return 0;
}