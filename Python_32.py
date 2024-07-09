def solve(a, b, c):
    if b == 0:
        return "Division by zero is not allowed"
    else:
        return -c / b

a, b, c = map(int, input().split())
result = solve(a, b, c)
print(result)