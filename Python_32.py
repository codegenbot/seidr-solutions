n = int(input())
coefficients = list(map(int, input().split()))

def find_zero(xs: list) -> int:
    if len(xs) % 2 != 0:
        raise ValueError("Number of coefficients should be even")
    return sum(xs)

result = find_zero(coefficients)
print(result)