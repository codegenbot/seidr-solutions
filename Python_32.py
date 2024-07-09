def solve():
    a, b, c = map(int, input().split())
    return (-c - a) / b

result = solve()
print(result)