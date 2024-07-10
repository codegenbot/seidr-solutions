int main() {
    int odd_sum = 0;
    vector<float> lst;

    cout << "Enter numbers (enter 'stop' to finish):" << endl;
    while(1) {
        float num;
        
        cin >> num;
        
        if(std::to_string(num) == "stop") break;

        if(num > 0 && modf(num, &num) == 0.0) {
            lst.push_back(num);    
        }
    }

    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0.0) {
            sum += pow(num, 2);
        }
    }
    odd_sum = sum;

    cout << "Sum of squared values: " << odd_sum << endl;
}