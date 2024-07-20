if sum(nums) < 0:
    for i, num in enumerate(nums):
        total_sum = 0
        while True:
            total_sum += num
            if total_sum < 0:
                return i + 1
            num -= 1
            if num < 0:
                break