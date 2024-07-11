#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<int> a,vector<int>b){
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

vector<int> even_odd_count(int num) {
    int even = 0, odd = 0;
    string str = to_string(abs(num));
    for (char c : str) {
        if (stoi(string(1,c)) % 2 == 0)
            even++;
        else
            odd++;
    }
    vector<int> result({even, odd});
    return result;
}

int main() {
    assert(even_odd_count(0).at(0) == 1 && even_odd_count(0).at(1) == 0);
    return 0;
}