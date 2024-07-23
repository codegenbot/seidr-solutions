#include <cmath>
#include <vector>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    int n; 
    cin >> n; // Read number of elements
    for(int i = 0; i < n; i++) {
        float x; 
        cin >> x; // Read the element
        lst.push_back(x); // Add it to the vector
    }
    long long odd_sum = double_the_difference(lst);
    cout << odd_sum << endl;
    return 0;
}