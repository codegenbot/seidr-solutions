```
def find_pair(target_sum, nums):
    num_set = set(nums)
    for num in num_set:
        if target_sum - num in num_set:
            return f"{num} {target_sum - num}"
    return f"{target_sum} not found"

n = int(input())
print(find_pair(n, [int(x) for x in input().split()]))