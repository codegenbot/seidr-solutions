def find_zero(a: int, b: int, c: int):
    if c == 0:
        return -b / (2 * a)
    else:
        return -b / (2 * c)

print("Enter three integers separated by spaces (a b c):")
a, b, c = map(int, input().split())
result = find_zero(a, b, c)
print(result)