```
def specialFilter(nums):
    return sum(1 for num in nums if abs(num) > 10 and (abs(num)%10)%2==1)