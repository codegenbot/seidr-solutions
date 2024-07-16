def check_numbers(nums, k):
    seen = set()
    for num in nums:
        if k - num in seen:
            return True
        seen.add(num)
    return False

result = check_numbers([5, 8, 3, 12, 7], 2)
print(result)