def find_zero(xs: list):
    assert len(xs) % 2 == 0
    n = len(xs) - 1
    a = xs[0]
    b = xs[n]
    return -a / b

xs = list(map(int, input("Enter a list of numbers separated by spaces: ").split()))
result = find_zero(xs)
print(result)