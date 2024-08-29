```python
def fuel_cost():
    n = int(input())
    nums = list(map(int, input().split()))
    return sum((num // 3) - 2 for num in nums)