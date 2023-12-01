vector<int> order_by_points(vector<int> nums){
  if(nums.empty()){
    return nums;
  }
  vector<pair<int,int>> sums;
  for(int i=0;i<nums.size();i++){
    int sum=0;
    int num=abs(nums[i]);
    while(num>0){
      sum+=num%10;
      num/=10;
    }
    sums.push_back(make_pair(sum,i));
  }
  sort(sums.begin(),sums.end());
  vector<int> result;
  for(auto it=sums.begin();it!=sums.end();it++){
    result.push_back(nums[it->second]);
  }
  return result;
}