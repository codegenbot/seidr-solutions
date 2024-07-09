def solve(a, b, c):
    return -c / b

a, b, c = map(int, input().strip().split()[:3])
result = solve(a, b, c)
print(result)