def check():
    lst = [int(i) for i in input("Enter numbers separated by space: ").split()]
    print(double_the_difference(lst))

def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0)