def double_the_difference(lst):
    if not lst:
        return 0
    return sum(x**2 for x in lst if isinstance(x, int) and x != 0 and x % 2 != 0) * 2


user_input = list(map(int, input().split()))
result = double_the_difference(user_input)
print(result)