int main() {
    vector<int> nums;
    int num;
    while(cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int diff = INT_MAX;
    int cut = 0;
    
    for(int i = 1; i < n; i++) {
        int sumLeft = 0, sumRight = 0;
        for(int j = 0; j < i; j++) {
            sumLeft += nums[j];
        }
        for(int j = i; j < n; j++) {
            sumRight += nums[j];
        }
        
        int currentDiff = abs(sumLeft - sumRight);
        if(currentDiff < diff) {
            diff = currentDiff;
            cut = i;
        }
    }
    
    for(int i = 0; i < cut; i++) {
        cout << nums[i] << endl;
    }
    for(int i = cut; i < n; i++) {
        cout << nums[i] << endl;
    }
    
    return 0;
}