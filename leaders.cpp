int main() {
    vector<int> nums;
    int num;
    
    while (true) {
        if (!(cin >> num)) {
            break;
        }
        nums.push_back(num);
    }
    
    vector<int> result = findLeaders(nums);
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}