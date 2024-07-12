```cpp
int main() { 
    std::vector<std::string> numbers; 
    int n; 
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        std::string num; 
        cin >> num; 
        numbers.push_back(num);
    }
    
    return count_nums(numbers);
}