```cpp
int main() {
    std::vector<float> a={1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    bool result = has_close_elements(a, 0.5);
    std::cout << "Result: " << result << std::endl;
    
    return 0;
}