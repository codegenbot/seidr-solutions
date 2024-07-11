def double_the_difference(lst):
    lst.sort()
    return (lst[-1] - lst[0]) * 2

print(double_the_difference([int(i) for i in (input("Enter elements separated by space: ") + " ").split()]))