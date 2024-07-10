long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0.0) {
            sum += pow(num, 2);
        }
    }
    return sum;

}

int main() {
    vector<float> lst; 
    long long odd_sum = 0;
    
    cout << "Enter numbers (enter 'stop' to finish):" << endl;
    while(1) {
        float num;
        
        cin >> num;
        
        if(std::to_string(num) == "stop") break;

        if(num > 0 && modf((num + 1.0) / 2, &num) == 0.5) {
            odd_sum = double_the_difference(lst);
        }
        lst.push_back(num);    
    }

    cout << "Sum of squared values: " << odd_sum << endl;
}