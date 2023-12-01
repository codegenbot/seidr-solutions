#include <vector>

using namespace std;

long long double_the_difference(vector<float>& lst){
    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            odd_sum += num * num;
        }
    }
    return odd_sum;
}

int main() {
    vector<float> lst;
    // read input from user
    float num;
    while (cin >> num) {
        lst.push_back(num);
    }
    long long odd_sum = double_the_difference(lst);
    cout << odd_sum << endl;
   
    return 0;
}