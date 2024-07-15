def find_zero(a: str, b: str) -> str:
    a = float(a)
    b = float(b)
    if a == 0:
        return "undefined"
    return -b / a

a, b = input().split()
result = find_zero(a, b)
print(result)