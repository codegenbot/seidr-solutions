```cpp
int main() {
    int n; 
    std::cin >> n;
    char* arr = new char[n];
    for (int i = 0; i < n; ++i)
        std::cin >> (char)(arr[i]);
    return 0;
}