def sum_squares(lst):
    return sum(i**2 for i in lst)


print(sum_squares([int(x) for x in input().split(",")]))