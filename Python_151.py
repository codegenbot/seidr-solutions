```
def double_the_difference(lst):
    lst.sort()
    difference = lst[-1] - lst[0]
    return double(difference)

def double(n):
    return n * 2

print(double_the_difference([1, 2, -3]))