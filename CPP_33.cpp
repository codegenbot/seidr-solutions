#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_third(vector<int> l){
    vector<int> l_prime = l;
    for (int i = 2; i < l.size(); i += 3) {
        sort(l_prime.begin() + i - 2, l_prime.begin() + i + 1);
    }
    return l_prime;
}