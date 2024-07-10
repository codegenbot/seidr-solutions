```
def double_the_difference(nums):
    avg = sum(nums) / len(nums)
    return abs(sum(num - avg for num in nums))

def check(lst, func):
    return func(lst)

print(check([1, 2, 3], lambda x: double_the_difference(x)))