#include <vector>
#include <iostream>

bool compareVectors(std::vector<int> a, std::vector<int> b) {
    if(a.size()!=b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i]!=b[i]) return false;
    }
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
    std::vector<int> expected = even_odd_count(123);
    bool check = compareVectors(even_odd_count(expected[0]), std::vector<int>{1,2});
    if(check) std::cout << "Test passed\n";
    else std::cout << "Test failed\n";
    return 0;
}