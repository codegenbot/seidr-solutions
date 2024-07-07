#include <cassert>
#include <vector>

int search(int n) {
    if(n < 0)
        return -1;
    else
        return n;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    assert(search(num) == num);
    
    std::vector<int> vec = {3, 10, 10, 9, 2};
    for (int i : vec) {
        if (i < 0)
            std::cout << "Number is negative: " << i << std::endl;
        else
            std::cout << "Number is positive: " << i << std::endl;
        assert(search(i) == i);
    }
    
    return 0;
}