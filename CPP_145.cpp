vector<int> order_by_points(vector<int> nums){
  if(nums.empty()) return nums;
  
  vector<pair<int, int>> sumDigits;
  for(int i=0; i<nums.size(); i++){
    int sum = 0;
    int num = nums[i];
    while(num != 0){
      sum += abs(num % 10);
      num /= 10;
    }
    sumDigits.push_back(make_pair(i, sum));
  }
  
  sort(sumDigits.begin(), sumDigits.end(), [](pair<int, int>& a, pair<int, int>& b){
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
  });
  
  vector<int> result;
  for(auto& item : sumDigits){
    result.push_back(nums[item.first]);
  }
  
  return result;
}