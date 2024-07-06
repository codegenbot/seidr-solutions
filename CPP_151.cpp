#include<vector>
using namespace std;
long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    vector<float> odd_nums;
    for (float x : lst) {
        if (x >= 0 && (int)x == x) {
            odd_nums.push_back(x);
            sum += pow(x, 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst;
    // Input elements into the list
    long long odd_sum = 0;
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}