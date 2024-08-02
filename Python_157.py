def check_pythagorean(a, b, c):
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2

inputs = input().strip().split()
a, b, c = map(int, inputs)

result = check_pythagorean(a, b, c)
print(result)