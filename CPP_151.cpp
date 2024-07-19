long long doubleTheDifference(vector<float> lst) {
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
    vector<float> numbers = {1.5, 4.7, -3.8, 10.2};
    cout << doubleTheDifference(numbers);
}