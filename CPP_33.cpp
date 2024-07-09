#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> l_prime;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            // Sort values at indices divisible by three
            vector<int> temp{l.begin() + i, l.begin() + i+1};
            sort(temp.begin(), temp.end());
            l_prime.insert(l_prime.end(), temp.begin(), temp.end());
        } else {
            l_prime.push_back(l[i]);
        }
    }
    return l_prime;
}