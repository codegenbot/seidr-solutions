def solve():
    a, b, c = map(int, input("Enter three integers separated by space: ").split())
    return -c / b

result = solve()
print(result)