a, b, c = map(int, input().split())

def check_pythagorean(a, b, c):
    if a**2 + b**2 == c**2:
        return "Yes"
    else:
        return "No"

result = check_pythagorean(a, b, c)
print(result)