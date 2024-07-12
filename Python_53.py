def solve(x: int, y: int) -> int:
    return x + y

x, y = map(int, input().split())
result = solve(x, y)
print(result)