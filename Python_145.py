
def order_by_points(nums):
    nums.sort(key=lambda x: (sum(int(i) for i in str(x)), -nums.index(x)))
    return nums