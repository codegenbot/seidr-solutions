```
def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0)

check(double_the_difference([int(x) for x in input("Enter a list of numbers: ").split()]))