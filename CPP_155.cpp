```cpp
#include <vector>
#include <iostream>

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

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size()!=b.size())
        return false;
    for(int i=0;i<a.size();i++)
        if(a[i]!=b[i])
            return false;
    return true;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::vector<int> result = even_odd_count(num);
    bool reversed_num = 1;
    for(int i : result) {
        if(i == 0)
            continue;
        if(reversed_num)
            num = i;
        else
            num = 9-i;
        if(even_odd_count(num)[0] != even_odd_count(num)[1])
            reversed_num = false;
    }
    if(reversed_num)
        std::cout << "The input number is the same when its digits are reversed." << std::endl;
    else
        std::cout << "The input number is not the same when its digits are reversed." << std::endl;
}