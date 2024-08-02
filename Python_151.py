def check():
    lst = list(map(int, input("Enter numbers separated by space: ").split()))
    print(double_the_difference(lst))

def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)

check()