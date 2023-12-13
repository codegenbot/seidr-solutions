```python
def basement(nums):
    sum_so_far = 0
    for i in range(len(nums)):
        sum_so_far += nums[i]
        if sum_so_far < 0:
            return i
    return -1

input_str = input()
nums = [int(num) for num in input_str.split()]

result = basement(nums)
print(result)
```