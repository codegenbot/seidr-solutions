def double_the_difference(lst):
    lst = [x for x in lst if x > 0 and x % 2 != 0]
    return sum(x**2 for x in lst)

input_list = list(map(int, input().split()))
result = double_the_difference(input_list)
print(result)