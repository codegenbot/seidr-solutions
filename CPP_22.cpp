#include <iostream>
#include <vector>

bool filter_integers(std::vector<int> numbers) {
    for (int &num : numbers) {
        if (num < 0) {
            num = 0;
        }
    }
    return true;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n1, n2, n3, n4;
    
    // Taking inputs
    std::cout << "Enter the number of elements: ";
    std::cin >> n1;
    vector<int> a(n1);
    cout << "Enter " << n1 << " integers for first set: \n";
    for (int i = 0; i < n1; i++) {
        cin >> a[i];
    }
    
    // Taking inputs
    std::cout << "Enter the number of elements: ";
    std::cin >> n2;
    vector<int> b(n2);
    cout << "Enter " << n2 << " integers for second set: \n";
    for (int i = 0; i < n2; i++) {
        cin >> b[i];
    }
    
    if (issame(a, b)) {
        std::cout << "The two sets are the same." << std::endl;
    } else {
        std::cout << "The two sets are not the same." << std::endl;
    }
    return 0;