```
def order_by_points(nums):
    nums.sort(key=lambda x: (sum(int(digit) for digit in str(abs(x))), -nums.index(x)))
    return nums