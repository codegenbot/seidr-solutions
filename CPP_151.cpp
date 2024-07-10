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
    cin >> lst.size();
    for(int i = 0; i < lst.size(); i++) {
        float temp;
        cin >> temp;
        lst.push_back(temp);
    }

    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            odd_sum += pow(num, 2);
        }
    }

    assert(double_the_difference(lst) == odd_sum);

    return 0;
}