#include <iostream>
#include <vector>

bool operator==(const std::vector<int>& a, const std::vector<int>& b) {
    if(a.size()!=b.size())
        return false;
    for(int i=0;i<a.size();i++)
        if(a[i]!=b[i])
            return false;
    return true;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int stones = 1; 
    while (stones <= n) {
        pile.push_back(stones);
        stones +=2; // increment stones by 2
    }
    return pile;
}

int main() {
    assert(std::make_a_pile(8) == std::vector<int>{1,3,5,7,9,11,13,15});
    return 0;
}