def find_average(numbers):
    min_val = min(numbers)
    max_val = max(numbers)
    if (max_val - min_val) == 0:
        return ["0.0"] * len(numbers)
    return [str((i - min_val) / (max_val - min_val)) for i in numbers]

numbers = list(map(float, input("Enter numbers (space-separated): ").split()))
print(find_average(numbers))