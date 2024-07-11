```
def double_the_difference():
    lst = input("Enter a list of integers: ").split(', ')
    return sum(i**2 for i in map(int, filter(lambda x: isinstance(x, str) and x.isdigit() and int(x) >= 0 and int(x) % 2 != 0, lst))