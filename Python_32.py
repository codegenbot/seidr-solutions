def find_zero(a: float, b: float) -> float:
    return -b / a

a = float(input("Enter a non-zero value for 'a': "))
b = float(input("Enter a value for 'b': "))
result = find_zero(a, b)
print(result)