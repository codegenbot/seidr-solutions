#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result;
    for(int i = 1; i <= n; ++i) {
        result.push_back(i % 2 == 0 ? 0 : 1);
    }
    return result;
}