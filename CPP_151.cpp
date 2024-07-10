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
    cout << "Enter numbers (enter 'q' to quit):" << endl;
    while (cin >> num) {
        if (num == 'q') break;
        lst.push_back(num);
    }

    long long odd_sum = double_the_difference(lst);

    return 0;
}