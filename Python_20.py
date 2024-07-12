def find_max_min_sum(numbers):
    try:
        numbers = [int(x) for x in numbers.strip().split(",")]
        return max(numbers), min(numbers), sum(numbers)
    except ValueError:
        return "Invalid input. Please enter numbers separated by commas."

numbers = input("Enter numbers separated by commas:").strip()
result = find_max_min_sum(numbers)
print(result)