```cpp
#include <iostream>
#include <vector>
#include <limits>

using namespace std;

bool isSame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<int> getOddCollatz(int n) {
    std::vector<int> res; 
    res.push_back(n); 
    while (n > 1) {
        if (n % 2 == 0 && n != 1) {
            n = n / 2;
        } else {
            res.push_back(std::move(n));
            n = (n * 3 + 1);
        }
    }
    return res;
}

void startProgram() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    if (n <= 0) {
        cerr << "Error: Please enter a positive integer." << endl;
        return;
    }
    std::vector<int> res = getOddCollatz(n);
    for (int i : res) {
        std::cout << i << " ";
    }
    std::cout << endl;
    if (!res.empty()) {
        if (isSame(res, getOddCollatz(1))) {
            std::cout << "The sequence is the same as Collatz Conjecture." << endl;
        } else {
            std::cout << "The sequence does not match Collatz Conjecture." << endl;
        }
    } else {
        std::cout << "The sequence does not match Collatz Conjecture." << endl;
    }
}

int main() {
    startProgram();
    return 0;
}