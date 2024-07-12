```
def calculate_average_and_median():
    while True:
        user_input = input("Enter numbers separated by space: ")
        try:
            numbers = list(map(int, user_input.split()))
            break
        except ValueError:
            print("Invalid input. Please enter valid numbers separated by space.")

    if not numbers:
        return None

    average = sum(numbers) / len(numbers)
    median = sorted(numbers)[len(numbers) // 2]

    print(f"Average: {average}, Median: {median}")

while True:
    calculate_average_and_median()
    response = input("Do you want to process another set of numbers? (y/n): ")
    if response.lower() != 'y':
        break