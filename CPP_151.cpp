```cpp
int odd_sum = 0; 

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0.0) {
            sum += pow(num, 2);
        } else {
            odd_sum += num;
        }
    }
    return sum;
}

int main() {
    vector<float> lst; 
    cin >> lst.size();
    for (int i = 0; i < lst.size(); i++) {
        float x;
        cin >> x;
        lst.push_back(x);
    }
    
    long long result = double_the_difference(lst);
    cout << result;

    return 0;
}