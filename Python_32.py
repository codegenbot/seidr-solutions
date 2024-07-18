
def find_zero(a: int, b: int):
    x = -a / b
    return x

a, b = map(int, input().split())

result = find_zero(a, b)
print(result)