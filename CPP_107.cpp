#include <vector>
#include <cassert>
using namespace std;

vector<int> even_odd_palindrome(int n){
    return {n / 2, n - n / 2};
}