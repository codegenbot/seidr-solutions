def double_the_difference(lst):
    return sum(num**2 for num in lst if num > 0 and num % 2 != 0)

lst = [1, 2, 3, 4, 5]
odd_sum = double_the_difference(lst)
print(odd_sum)