#include <iostream>
#include <vector>
#include <algorithm>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    if (str != std::to_string(std::reverse(str).begin(), std::reverse(str).end())) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

int main() {
    std::vector<int> q;
    int w;
    std::cout << "Enter the weight limit: ";
    std::cin >> w;
    for(int i = 0 ; i < 5 ; i++) {
        std::cout << "Enter the weight of package " << i+1 << ": ";
        int p;
        std::cin >> p;
        q.push_back(p);
    }
    
    if(will_it_fly(q, w)) {
        std::cout << "The packages can be delivered." << std::endl;
    } else {
        std::cout << "The packages cannot be delivered." << std::endl;
    }

    return 0;
}