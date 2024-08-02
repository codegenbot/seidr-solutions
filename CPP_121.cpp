#include <vector>

int main() {
    std::vector<int> lst;
    int sum = 0;

    // Input the list of numbers
    for (int i = 0; i < 5; i++) {
        int num;
        std::cin >> num;
        lst.push_back(num);
    }

    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }

    return sum;
}