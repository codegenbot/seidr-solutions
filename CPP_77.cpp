```cpp
int main() {
    int a;
    std::cout << "Enter an integer: ";
    std::cin >> a;
    if (a < 0) {
        std::cout << "The number is not a cube." << std::endl;
    } else {
        if (iscuber(a)) {
            std::cout << "The number is a cube." << std::endl;
        } else {
            std::cout << "The number is not a cube." << std::endl;
        }
    }
    return 0;
}
```