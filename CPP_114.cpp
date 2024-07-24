long long result = nums[0];
	long long sum = 0;
	for (long long num : nums) {
		sum = min(num, sum + num);
		result = min(result, sum);
	}
	return result;
}