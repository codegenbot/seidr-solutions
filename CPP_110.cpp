#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>

std::string exchange(std::vector<int> A, std::vector<int> B) {
    std::sort(A.begin(), A.end());
    std::sort(B.begin(), B.end());
    return (A[0] < B[0] && A[1] < B[1]) ? "YES" : "NO";
}

int main() {
    assert(exchange({100, 200}, {200, 200}) == "YES");
    
    return 0;
}