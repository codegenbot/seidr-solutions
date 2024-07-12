int main() {
    vector<int> vec;
    int n;
    cin >> n;
    vec.push_back(n);
    
    int sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i];
    }
    
    int half_sum = sum / 2;
    int curr_sum = 0;
    int cut_index = -1;
    
    for (int i = 0; i < vec.size(); i++) {
        curr_sum += vec[i];
        if (curr_sum == half_sum || abs(curr_sum - half_sum) < abs(sum - 2 * curr_sum)) {
            cut_index = i;
            break;
        }
    }
    
    for (int i = 0; i <= cut_index; i++) {
        cout << vec[i] << endl;
    }
    
    if (cut_index < vec.size() - 1) {
        cout << 0 << endl;
    }
    
    return 0;
}