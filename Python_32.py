def solve(a, b, c):
    return -c / b

a, b, c = map(int, input().strip().split())
result = solve(a, b, c)
print(result)