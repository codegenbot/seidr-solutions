#include <vector>
#include <algorithm>

int issame(int a, vector<int> b) {
    return a == b[0] && a == b[1];
}

int main() {
    vector<int> result = palindrome_counter(10);
    return 0;
}