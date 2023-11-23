import math


def poly():
    xs = list(map(float, input("Enter the coefficients: ").split()))
    x = float(input("Enter the value of x: "))
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero():
    xs = list(map(float, input("Enter the coefficients: ").split()))
    zeros = []
    for i in range(len(xs) - 1):
        zeros.append(-xs[i] / xs[i+1])
    return zeros


# Read task type from user
task_type = input("Enter task type ('poly' or 'find_zero'): ")

if task_type == "poly":
    result = poly()
elif task_type == "find_zero":
    result = find_zero()

# Print the result
print(result)