#include <vector>
#include <algorithm>
#include <iostream> 

using namespace std;

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
        if (j % 3 == 0) {
            l_prime[i] = l_divisible_by_three[j];
            j++;
        }
    }
    return l_prime;
}

int main() {
    vector<int> input = {9, 2, 6, 4, 1, 7, 5, 8, 3};
    vector<int> sorted_third = sort_third(input);
    
    for (int num : sorted_third) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}