def find_zero():
    a = 1
    while a == 0.0 or a == 0:
        a = float(input("Enter a non-zero value for a (a cannot be zero): "))
    b = float(input("Enter value for b: "))
    return -b / a

result = find_zero()
print(result)