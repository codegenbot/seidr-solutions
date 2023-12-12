```python
def find_leaders(nums):
    leaders = []
    max_num = float('-inf')
    for num in reversed(nums):
        if num >= max_num:
            leaders.append(num)
            max_num = num
    return leaders

# Read input from user
n = int(input())
nums = []
for _ in range(n):
    nums.append(int(input()))

# Call the function and print the result
result = find_leaders(nums)
for num in result:
    print(num)
```