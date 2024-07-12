def find_zero():
    a = float(input("Enter value for a: "))
    b = float(input("Enter value for b: "))
    if a == 0:
        return "Error: 'a' should not be 0"
    return -b / a

result = find_zero()
print(result)