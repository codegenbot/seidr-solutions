#include <vector>
using namespace std;

vector<int> even_odd_palindrome(int n){
    vector<int> res;
    res.push_back(n / 2);
    res.push_back(n - n / 2);
    return res;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert(issame(even_odd_palindrome(1), {0, 1}));
    return 0;
}