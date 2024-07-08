```cpp
int search(std::vector<int> lst) {
    std::map<int, int> freq;
    for (int i : lst) {
        freq[i]++;
    }
    for (auto& p : freq) { 
        if (p.second >= p.first) {
            return p.first;
        }
    }
    return -1;
}

int main() {
    int n; 
    std::vector<int> lst;
    
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int val;
        std::cin >> val;
        lst.push_back(val);
    }
    
    int result = search(lst);
    std::cout << "Result: " << result << std::endl;
    
    return 0;
}