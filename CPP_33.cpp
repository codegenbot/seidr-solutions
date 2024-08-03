#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> sort_third(vector<int> l);

int main() {
    vector<int> numbers = {9, 3, 1, 4, 7, 5, 6, 8, 2};
    vector<int> sorted_numbers = sort_third(numbers);
    for (const int &num : sorted_numbers) {
        std::cout << num << " ";
    }
    return 0;
}

vector<int> sort_third(vector<int> l) {
    vector<int> res = l;
    vector<int> sorted_third;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sorted_third.push_back(l[i]);
        }
    }
    sort(sorted_third.begin(), sorted_third.end());
    int idx = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            res[i] = sorted_third[idx++];
        }
    }
    return res;
}