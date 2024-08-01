```cpp
#include <vector>

int prod_signs(vector<int> arr) {
    int product = 1;
    long long sum = 0;
    
    for(int i : arr) {
        if(i == 0)
            return 0;
        product *= (i > 0 ? 1 : -1);
        sum += abs(i);
    }
    
    if(arr.empty())
        return -32768;
    
    return product * sum;
}

int main() {
    vector<int> arr = {1, 2, -3};
    cout << prod_signs(arr) << endl;
    return 0;
}