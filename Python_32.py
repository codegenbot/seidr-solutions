xs = list(map(float, input("Enter space-separated list of numbers: ").split()))

def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -b / a

result = find_zero(xs)
print(result)