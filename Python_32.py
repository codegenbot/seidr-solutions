print("Enter a list of numbers separated by spaces:")
xs = list(map(float, input().strip().split()))

def find_zero(xs: list) -> float:
    a = xs[0]
    b = xs[1]
    if a == 0:
        return "undefined"
    return -b / a

result = find_zero(xs)
print(result)