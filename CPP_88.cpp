#include <vector>
#include <initializer_list>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int sum = 0;

vector<int> sort_array(vector<int> array) {
    for (int i : array) {
        sum += i;
    }
    
    if (sum % 2 == 1)
        return vector<int>(array.begin(), array.end());
    else
        return vector<int>(array.rbegin(), array.rend());
}