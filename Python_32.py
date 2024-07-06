def find_zero():
    x1 = float(input("Enter first number: "))
    x2 = float(input("Enter second number: "))
    n = (x1 + x2) // 2
    return -n / x2

print(find_zero())