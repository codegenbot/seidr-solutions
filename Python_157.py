def check_pythagorean(a, b, c):
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2

values = raw_input().split()
a, b, c = map(int, values)

result = check_pythagorean(a, b, c)
print(result)