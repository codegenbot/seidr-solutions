```cpp
int main() {
    float a, b, c;
    std::cin >> a >> b >> c;
    if(any_int(a, b, c))
        std::cout << "The numbers are integers: " << std::to_string(a) << ", " << std::to_string(b) << ", " << std::to_string(c) << std::endl;
    else
        std::cout << "The numbers are not integers: " << std::to_string(a) << ", " << std::to_string(b) << ", " << std::to_string(c) << std::endl;
    return 0;
}