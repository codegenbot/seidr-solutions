n = int(input())
coefficients = list(map(int, input().split()))

def find_zero(xs: list, n: int):
    if len(xs) != n:
        raise ValueError("Number of coefficients does not match n")
    return sum(xs)

result = find_zero(coefficients, n)
print(result)