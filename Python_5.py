```
def find_max_min_average(numbers):
    if not isinstance(numbers, list):
        return "Error: Input is not a list."
    if not all(isinstance(i, int) for i in numbers):
        return "Error: All elements must be integers."

    max_num = max(numbers)
    min_num = min(numbers)
    average = sum(numbers) / len(numbers)

    return f"Max: {max_num}, Min: {min_num}, Average: {average}"

while True:
    try:
        num_str = input("Enter numbers separated by space: ")
        if not num_str.strip():
            print("Error: Please enter at least one number.")
            continue
        numbers = list(map(int, num_str.split()))
        break
    except ValueError:
        print("Error: Please enter numeric values separated by spaces.")

print(find_max_min_average(numbers))