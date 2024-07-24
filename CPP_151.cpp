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
    vector<float> lst = {1.5f, -3.4f, 2.7f, 5.8f, -6.9f};
    long long odd_sum = double_the_difference(lst); 
    assert(double_the_difference(lst) == odd_sum); 
    return 0;
}