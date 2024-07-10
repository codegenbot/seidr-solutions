long long double_the_difference(vector<float> lst) {
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
    float num;
    cout << "Enter numbers (q to quit): ";
    while(true) {
        cin >> num;
        if(num == 'q') break;
        lst.push_back(num);
    }

    long long odd_sum = 0;
    for (float number : lst) {
        if (number > 0 && floor(number) == number) { 
            odd_sum += pow(number, 2);
        }
    }

    cout << "The double difference is: " << double_the_difference(lst) - odd_sum << endl;

    return 0;
}