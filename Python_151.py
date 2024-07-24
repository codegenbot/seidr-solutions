```
def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0)

def check():
    print(double_the_difference([1,3,5]))

check()