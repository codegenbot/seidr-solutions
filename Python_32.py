def find_zero():
    a = float(input("Enter a non-zero value for a (a cannot be zero): "))
    while a <= 0.0:
        a = float(input("a cannot be zero. Please enter a non-zero value for a: "))
    b = float(input("Enter value for b: "))
    return -b / a

result = find_zero()
print(result)