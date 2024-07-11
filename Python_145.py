```
def order_by_points(nums):
    return sorted((num, sum(map(int, str(abs(num))))) for num in nums)