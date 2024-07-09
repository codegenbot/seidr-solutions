#include<vector>

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && floor(num) == num) {
            sum += pow(num - floor(num), 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.5f, 2.3f, 3.7f};
    cout << double_the_difference(lst) << endl;
    return 0;
}