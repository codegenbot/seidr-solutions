def calculate_mad():
    from typing import List
    import statistics

    while True:
        print("Please enter the numbers you want to calculate Mean Absolute Deviation (MAD) for, separated by a space: ")
        user_input = input()
        try:
            numbers = [float(i) for i in user_input.split()]
            if len(numbers) < 2:
                print("Please enter at least two numbers.")
            else:
                average = statistics.mean(numbers)
                total = sum(abs(num - average) for num in numbers)
                result = total / len(numbers)
                print(result)
                break
        except ValueError:
            print("Invalid input. Please enter valid numbers.")