def find_zero(xs: list[float]) -> float:
    a = xs[-1]
    b = xs[-2]
    return -b / a

numbers = list(map(float, input("Enter a list of numbers separated by space: ").split()))
print(find_zero(numbers))