```
int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::vector<int> vec;
    
    for(int i = 0; i < n; i++) {
        int val;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> val;
        vec.push_back(val);
    }
    
    if(is_sorted(vec)) {
        std::cout << "The vector is sorted.\n";
    } else {
        std::cout << "The vector is not sorted.\n";
    }
    
    return 0;