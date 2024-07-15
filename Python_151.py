def double_the_difference(lst):
    return sum((x * 2) for x in lst if x > 0 and x % 2 != 0) if lst is not None else 0

lst = list(map(int, input().strip().split()))
result = double_the_difference(lst)
print(result)