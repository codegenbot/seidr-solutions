def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0) * 2 - max(lst)


lst = input("Enter a list of numbers: ")
lst = [int(x) for x in lst.split()]

odd_sum = sum(i for i in lst if i % 2 != 0)

print(odd_sum == double_the_difference(lst))