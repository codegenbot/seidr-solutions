def find_pair(nums, target):
        min_diff = float('inf')
        for i in range(len(nums)):
            for j in range(i+1, len(nums)):
                diff = abs(nums[i] - nums[j])
                if diff < min_diff:
                    min_diff = diff
                    pair = (nums[i], nums[j])
        return pair