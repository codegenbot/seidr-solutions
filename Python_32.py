n = int(input())
coefficients = list(map(int, input().split()))

def find_zero(xs: list, n: int):
    if n % 2 != 0:
        raise ValueError("Number of coefficients should be even")
    return sum(xs)

result = find_zero(coefficients, n)
print(result)