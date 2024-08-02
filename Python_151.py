def double_the_difference(lst, odd_sum):
    return sum(x**2 for x in lst if x % 2 != 0) * 2

lst, odd_sum = map(int, input().split())

result = double_the_difference(lst, odd_sum)
print(result)