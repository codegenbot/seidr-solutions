def calculate_average_and_median():
    user_input = input("Enter numbers separated by space: ")
    numbers = list(map(int, user_input.split()))

    if not numbers:
        return None

    average = sum(numbers) / len(numbers)
    median = sorted(numbers)[len(numbers) // 2]

    print(f"Average: {average}, Median: {median}")


calculate_average_and_median()