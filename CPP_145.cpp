vector<int> order_by_points(vector<int> nums){
    vector<int> result;
    vector<pair<int, int>> sumIndexPairs;

    for(int i=0; i<nums.size(); i++){
        int sum = 0;
        int num = abs(nums[i]);
        while(num > 0){
            sum += num % 10;
            num /= 10;
        }
        sumIndexPairs.push_back(make_pair(sum, i));
    }

    sort(sumIndexPairs.begin(), sumIndexPairs.end());

    for(auto pair : sumIndexPairs){
        result.push_back(nums[pair.second]);
    }

    return result;
}