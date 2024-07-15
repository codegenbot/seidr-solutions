xs = list(map(float, input("Enter two numbers separated by space: ").strip().split()))

def find_zero(xs: list) -> float:
    a, b = xs
    return "undefined" if a == 0 else -b / a

result = find_zero(xs)
print(result)