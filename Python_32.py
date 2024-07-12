def find_zero(a: float, b: float) -> float:
    return -b / a if a != 0 else "Error: 'a' should be a non-zero value"

a = float(input("Enter a non-zero value for 'a': "))
while a == 0:
    print("Error: 'a' should be a non-zero value")
    a = float(input("Enter a non-zero value for 'a': "))

b = float(input("Enter a value for 'b': "))
result = find_zero(a, b)
print(result)