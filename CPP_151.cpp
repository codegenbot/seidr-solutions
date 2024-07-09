#include <vector>
using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && fabs(num) == floor(num)) { 
            sum += pow(num, 2); 
        }
    }
    return sum;
}

int main() {
    vector<float> lst; // declare the vector here
    // add elements to the vector as required
    int odd_sum = 0; // declare odd_sum here
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}