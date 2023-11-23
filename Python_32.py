import math
def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list) -> list:
    zeros = []
    for i in range(len(xs) - 1):
        zeros.append(-xs[i] / xs[i+1])
    return zeros

input_data = input().split('\n')
task_type = input_data[0]
values = list(map(float, input_data[1].split()))

if task_type == "poly":
    x = values.pop(-1)
    result = poly(values, x)
elif task_type == "find_zero":
    result = find_zero(values)

print(result)