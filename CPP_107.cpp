#include <vector>
#include <algorithm>
#include <string>

vector<int> even_odd_palindrome(int n);

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    assert(issame(even_odd_palindrome(1), vector<int>{0, 1}));
}