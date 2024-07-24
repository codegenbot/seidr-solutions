#include <vector>
#include <iostream>

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> res;
    while (n > 1) {
        if (n % 2 != 0) {
            res.push_back(n);
        }
        n = (n * 3 + 1);
    }
    return res;
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    std::vector<int> res = get_odd_collatz(n);
    for (int i : res) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    if(res.size() == 1 && res[0] == 1) {
        int arr[res.size()];
        for(int i=0; i<res.size(); i++) {
            arr[i] = res[i];
        }
        assert(std::equal(arr, arr+res.size(), &n));
    } else {
        assert(false);
    }

    return 0;
}