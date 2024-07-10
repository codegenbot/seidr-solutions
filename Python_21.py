```
def solve_task(numbers):
    if (max(numbers) - min(numbers)) == 0:
        return ["0.0"] * len(numbers)