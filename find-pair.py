
def find_pair(nums, target):
    seen = set()
    for num in nums:
        complement = target - num
        if complement in seen:
            return num, complement
        else:
            seen.add(num)
    return None, None