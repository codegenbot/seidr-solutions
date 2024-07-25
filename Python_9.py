def rolling_max(numbers: List[int]) -> List[int]:
    return [max(nums[i:] for nums in (numbers[:i+1],)) for i in range(len(numbers))]