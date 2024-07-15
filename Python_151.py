def double_the_difference(lst):
    lst = list(map(int, input().split()))
    return sum(x ** 2 for x in lst if x > 0 and x % 2 != 0) if lst else 0

result = double_the_difference([])
print(result)