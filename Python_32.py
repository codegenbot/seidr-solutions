xs = list(map(float, input().split()))

def find_zero(xs: list) -> float:
    a = xs[-1]
    b = xs[-2]
    return -b / a

result = find_zero(xs)
print(result)