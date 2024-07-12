```
def double_the_difference():
    lst = input("Enter a list of numbers: ").split()
    lst = [int(i) for i in lst]
    return sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)

print(double_the_difference())