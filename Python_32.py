n = int(input())
coefficients = list(map(int, input().split()))

def find_zero(xs: list, n: int):
    if len(xs) != n:
        raise ValueError("Incorrect number of coefficients provided")
    return sum(xs)

result = find_zero(coefficients, n)
print(result)