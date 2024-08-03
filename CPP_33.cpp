#include <vector>
#include <algorithm>
#include <cassert>
#include <iterator>

using namespace std;

bool issame(vector<int>& a, vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> sort_third(vector<int> l);

int main() {
    vector<int> input = {9, 3, 6, 15, 12, 18, 21, 24};
    vector<int> output = sort_third(input);
    copy(output.begin(), output.end(), ostream_iterator<int>(cout, " "));
    return 0;
}

vector<int> sort_third(vector<int> l) {
    vector<int> l_divisible_by_three;
    for (int i = 0; i < l.size(); i++) {
        if (l[i] % 3 == 0) {
            l_divisible_by_three.push_back(l[i]);
        }
    }
    sort(l_divisible_by_three.begin(), l_divisible_by_three.end());
    
    vector<int> l_prime = l;
    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            l_prime[i] = l_divisible_by_three[j / 3];
            j++;
        }
    }
    
    return l_prime;
}