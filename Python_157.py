a, b, c = map(int, input().split())

def check_pythagorean_triplet(a, b, c):
    if a > b and a > c:
        return a**2 == b**2 + c**2
    elif b > a and b > c:
        return b**2 == a**2 + c**2
    else: 
        return c**2 == a**2 + b**2

result = check_pythagorean_triplet(a, b, c)
print(result)