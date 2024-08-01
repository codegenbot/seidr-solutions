def find_zero(a: int, b: int, c: int):
    if c == 0:
        return -b / (2 * a)
    else:
        return -b / (2 * c)

a, b, c = map(int, input().strip().split())
result = find_zero(a, b, c)
print(result)