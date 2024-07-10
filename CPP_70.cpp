```cpp
bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n1, m1, n2, m2;
    std::cout << "Enter the size of first vector: ";
    std::cin >> n1 >> m1;
    std::vector<int> a(n1);
    for(int i = 0; i < n1; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> a[i];
    }
    std::cout << "Enter the size of second vector: ";
    std::cin >> n2 >> m2;
    std::vector<int> b(n2);
    for(int i = 0; i < n2; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> b[i];
    }
    if(issame(a, b)) {
        std::cout << "The two vectors are the same." << std::endl;
    } else {
        std::cout << "The two vectors are not the same." << std::endl;
    }
    return 0;
}