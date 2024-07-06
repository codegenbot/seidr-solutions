```cpp
long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (modf(sqrt(num), &num) != 0.0) { 
                sum += pow(num, 2); 
            }
        }
    }
    return sum;

}

vector<float> lst = {1.0, 2.0, 3.0};
long long odd_sum = double_the_difference(lst);
assert(odd_sum == 14);
return 0;