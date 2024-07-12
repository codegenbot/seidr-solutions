def find_zero(xs: list):
    assert len(xs) == 2
    assert xs[-1] != 0
    return -xs[0] / xs[1]

input_list = list(map(float, input("Enter two numbers separated by space: ").split()))

result = find_zero(input_list)
print(result)