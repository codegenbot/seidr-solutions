a, b = map(float, raw_input().strip().split())

def find_zero(a: float, b: float) -> float:
    if a == 0:
        return "undefined"
    return -b / a

result = find_zero(a, b)
print(result)