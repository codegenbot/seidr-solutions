#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<int> even_odd_count(int num){
    int even_count = 0;
    int odd_count = 0;
    string num_str = to_string(abs(num));
    
    for (char c : num_str) {
        int digit = c - '0';
        if (digit % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    return {even_count, odd_count};
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
    
    cout << "Test cases passed!" << endl;
    return 0;
}