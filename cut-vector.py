```python
def cut_vector(nums):
    n = len(nums)
    total_sum = sum(nums)
    left_sum = 0
    right_sum = total_sum

    left_index = -1
    right_index = n

    min_diff = float('inf')

    for i in range(n):
        left_sum += nums[i]
        right_sum -= nums[i]

        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            left_index = i
            right_index = i + 1

    left_subvector = nums[:left_index+1]
    right_subvector = nums[right_index:]

    return left_subvector, right_subvector


# Read input from user
nums = []
while True:
    try:
        num = int(input())
        nums.append(num)
    except:
        break

# Call the function and print the outputs
left_subvector, right_subvector = cut_vector(nums)
for num in left_subvector:
    print(num)
for num in right_subvector:
    print(num)
```
