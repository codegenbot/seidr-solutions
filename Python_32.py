def solve(a, b, c):
    return -c / b


print("Enter three integers separated by spaces:")
a, b, c = map(int, input().split())

result = solve(a, b, c)
print(result)