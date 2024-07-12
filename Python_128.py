def calculate_average_and_median():
    while True:
        user_input = input("Enter numbers separated by space: ")
        try:
            numbers = list(map(int, user_input.split()))
            if len(numbers) > 0:
                average = sum(numbers) / len(numbers)
                median = sorted(numbers)[len(numbers) // 2]
                print(f"Average: {average}, Median: {median}")
            break
        except ValueError:
            print("Invalid input. Please enter valid numbers separated by space.")

calculate_average_and_median()