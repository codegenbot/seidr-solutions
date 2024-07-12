def calculate_average_and_median():
    averages = []
    medians = []

    while True:
        user_input = input("Enter 'stop' to exit, or numbers separated by space: ")

        if user_input.lower() == 'stop':
            break

        try:
            numbers = list(map(int, user_input.split()))
            if not numbers:
                return "No numbers entered."

            average = sum(numbers) / len(numbers)

            sorted_numbers = sorted(numbers)
            n = len(sorted_numbers)
            median = (sorted_numbers[n // 2] + sorted_numbers[n // 2 - 1]) / 2 if n % 2 == 0 else sorted_numbers[n // 2]

            averages.append(average)
            medians.append(median)

        except ValueError:
            print("Invalid input. Please enter valid integers separated by space.")

    return f"Average: {sum(averages) / len(averages)}, Median: {max(medians)}"

print(calculate_average_and_median())