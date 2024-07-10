#include <iostream>
#include <vector>
#include <algorithm>

bool will_it_fly(vector<int> q, int w);

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (str != reverse(str).s) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

int main() {
    int w;
    std::cout << "Enter the weight: ";
    std::cin >> w;
    
    vector<int> q;
    while(true) {
        int x;
        std::cout << "Enter a quantity (0 to finish): ";
        std::cin >> x;
        if(x == 0) break;
        q.push_back(x);
    }
    
    bool result = will_it_fly(q, w);
    
    if(result)
        std::cout << "The package will fly.\n";
    else
        std::cout << "The package won't fly.\n";
    
    return 0;
}