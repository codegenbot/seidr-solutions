```cpp
int main() {
    int num, n = 0;
    std::vector<int> lst;
    std::cout << "Enter numbers (terminate with 0): ";
    int count = 0;
    while (count < 100 && std::cin >> num && num != 0) {
        lst.push_back(num);
        ++count;
    }
    int result = solutions(lst);
    if(result == 0)
        std::cout << "Test passed.\n";
}