def solve(a, b, c):
    return (a + b) / c

a, b, c = map(int, input().split())
result = solve(a, b, c)
print(result)