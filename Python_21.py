```
def find_average(numbers):
    min_val = min(numbers)
    max_val = max(numbers)
    if (max_val - min_val) == 0:
        return ["0.0"] * len(numbers)
    return [str((i - min_val) / (max_val - min_val)) for i in numbers]

def check(func, *args):
    return func(*args)

result = check(find_average, [1, 2, 3, 4, 5])