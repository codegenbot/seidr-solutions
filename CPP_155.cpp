#include <iostream>
#include <string>
#include <vector>
#include <cassert>

using namespace std;

vector<int> even_odd_count(int num) {
    int even_count = 0, odd_count = 0;
    string num_str = to_string(abs(num));
    for (char digit : num_str) {
        if ((digit - '0') % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    return {even_count, odd_count};
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
    
    return 0;
}