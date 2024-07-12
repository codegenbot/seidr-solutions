```
def calculate_average_and_median():
    while True:
        user_input = input("Enter numbers separated by space: ")
        
        if len(user_input.split()) == 1 and user_input.replace(' ', '').isdigit():
            print("Program did not receive expected input")
            continue

        try:
            numbers = list(map(int, user_input.split()))
            break
        except ValueError:
            print("Invalid input. Please enter valid numbers separated by space.")

    if not numbers:
        return "No numbers provided"

    average = sum(numbers) / len(numbers)

    sorted_numbers = sorted(numbers)
    n = len(sorted_numbers)
    median = (sorted_numbers[n // 2] + sorted_numbers[n // 2 - 1]) / 2 if n % 2 == 0 else sorted_numbers[n // 2]

    return f"Average: {average}, Median: {median}"

print(calculate_average_and_median())