def double_the_difference(lst):
    return abs(sum(lst)) - max(abs(x) for x in lst)


print(double_the_difference([1, 2, -3]))