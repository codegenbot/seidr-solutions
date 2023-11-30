#include <iostream>
#include <vector>

using namespace std;

vector<int> even_odd_count(int num);

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }

    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    assert (issame(even_odd_count(0) , {1, 0}));
    return 0;
}

vector<int> even_odd_count(int num) {
    int evenCount = 0;
    int oddCount = 0;

    while(num != 0) {
        int digit = abs(num % 10);
        if(digit % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
        num /= 10;
    }

    vector<int> result;
    result.push_back(evenCount);
    result.push_back(oddCount);

    return result;
}