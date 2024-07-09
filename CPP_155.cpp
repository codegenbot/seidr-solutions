#include <vector>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size()!=b.size())
        return false;
    for(int i=0;i<a.size();i++)
        if(a[i]!=b[i])
            return false;
    return true;
}

std::vector<int> even_odd_count(int num) {
    std::vector<int> result(2, 0);
    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 == 0)
            result[0]++;
        else
            result[1]++;
        num /= 10;
    }
    return result;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::vector<int> reversed = even_odd_count(num);
    if(issame(reversed, even_odd_count(std::to_string(num).reverse().erase(0, 1).converts_to_int())) {
        std::cout << "The input number is the same when its digits are reversed." << std::endl;
    } else {
        std::cout << "The input number is not the same when its digits are reversed." << std::endl;
    }
}