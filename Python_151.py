```
def double_the_difference():
    lst = [int(i) for i in input("Enter numbers separated by space: ").split()]
    return sum(i**2 for i in lst)