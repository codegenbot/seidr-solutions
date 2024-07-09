#include <vector>
using namespace std;

int prod_signs(vector<int> arr) {
    long long product = 1;
    long long sum = 0;
    
    for (int num : arr) {
        if (num == 0) {
            return -32768; 
        }
        int sign = (num > 0) ? 1 : ((num < 0) ? -1 : 0);
        product *= sign;
        sum += abs(num);
    }
    
    return product * sum;
}

int main() {
    vector<int> arr = {1, 2, 3};
    cout << prod_signs(arr) << endl;
    return 0;
}