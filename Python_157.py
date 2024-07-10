a, b, c = map(int, input().split())
try:
    print((a**2 + b**2 == c**2) or (a**2 + c**2 == b**2) or (b**2 + c**2 == a**2))
except:
    print("Invalid input. Please enter three integers separated by spaces.")