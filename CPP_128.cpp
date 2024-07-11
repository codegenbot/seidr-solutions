#include <vector>
#include <algorithm>

using namespace std;

int prod_signs(vector<int> arr) {
    long long product = 1;
    for (int num : arr) {
        if (num == 0) return 0; 
        product *= (num > 0 ? 1 : -1);
    }
    return product * abs(arr.empty() ? 0 : *max_element(arr.begin(), arr.end()));
}

int main() {
    assert(prod_signs({-1, 1, 1, 0}) == 0);
    return 0;
}