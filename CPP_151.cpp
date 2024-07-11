```cpp
int main() {
    vector<float> lst;
    long long odd_sum = 0;
    cout << "Enter three numbers: ";
    for(int i = 0; i < 3; ++i) {
        float num; 
        cin >> num;
        lst.push_back(num);
    }
    odd_sum = double_the_difference(lst);
    cout << "The sum of the squares of all positive integers in the list is: " << odd_sum << endl;
    return 0;
}

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (num % 2 != 0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}