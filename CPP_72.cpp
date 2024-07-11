#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    if (str != std::string(str.rbegin(), str.rend()).s) return false; // not balanced
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

int main() {
    std::vector<int> q = {3,1,4,2};
    int w = 5;
    if(will_it_fly(q,w))
        std::cout << "Yes, it will fly" <<std::endl;
    else
        std::cout << "No, it won't fly" << std::endl;
    return 0;
}