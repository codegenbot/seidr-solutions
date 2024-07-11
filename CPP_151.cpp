long long odd_sum = 0;
vector<float> lst;

int main() {
    int result = double_the_difference(lst);
    return 0;
}

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (num % 2 != 0) { 
                sum += pow(num, 2);
            } else {
                odd_sum += num;
            }
        }
    }
    long long difference = abs((long long)odd_sum - 1);
    return (sum + difference);
}