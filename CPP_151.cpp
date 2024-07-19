long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                sum += pow(num, 2); 
            }
        }
    }
    return sum;
}

int main() {
    vector<float> numbers = {1.5f, 3.0f, 4.5f, 6.0f};
    cout << double_the_difference(numbers) << endl;
    return 0;
}