#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i < a.size(); ++i) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> sum_product(vector<int> a) {
    int sum = 0;
    int product = 1;
    for (int num : a) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    vector<int> input = {num};
    vector<int> result = sum_product(input);
    assert(issame(result, {num, num}));
    
    return 0;
}