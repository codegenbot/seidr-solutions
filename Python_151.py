def check():
    num1 = int(input("Enter the first number: "))
    num2 = int(input("Enter the second number: "))
    lst = [num1, num2]
    print(double_the_difference(lst))


def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0)