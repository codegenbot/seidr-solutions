def double_the_difference(lst, odd_sum):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0) * 2

inputs = input().split()
lst = list(map(int, inputs[:-1]))
odd_sum = int(inputs[-1])

result = double_the_difference(lst, odd_sum)
print(result)