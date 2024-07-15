def find_zero() -> float:
    a, b = map(float, input().strip().split())
    if a == 0:
        return "undefined"
    return -b / a


result = find_zero()
print(result)