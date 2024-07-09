#include <bits/stdc++.h>
using namespace std;

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst;
    int odd_sum;

    cout << "Enter number of elements: ";
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        float num;
        cout << "Enter number " << (i+1) << ": ";
        cin >> num;
        lst.push_back(num);
    }

    long long result = double_the_difference(lst);

    cout << "Sum of squares of positive integers: " << result;

    return 0;
}