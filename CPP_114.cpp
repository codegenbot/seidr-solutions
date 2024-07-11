int n = nums.size();
long long minSum = nums[0];
long long currSum = nums[0];

for(int i = 1; i < n; i++){
    currSum = min(nums[i], currSum + nums[i]);
    minSum = min(minSum, currSum);
}

return minSum;
}