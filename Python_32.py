def solve(a, b, c):
    return -c / b

a, b, c = map(float, input().split())
result = solve(a, b, c)
print(result)