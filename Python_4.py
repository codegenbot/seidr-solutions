from typing import List
import statistics

def mean_absolute_deviation():
    while True:
        print("Please enter the numbers you want to calculate Mean Absolute Deviation (MAD) for, separated by a space: ")
        user_input = input()
        if user_input.strip() == "":
            print("Please enter some numbers.")
        else:
            try:
                numbers = [float(i) for i in user_input.split()]
                if len(numbers) < 2:
                    print("Please enter at least two numbers.")
                else:
                    average = statistics.mean(numbers)
                    total = sum(abs(num - average) for num in numbers)
                    result = total / len(numbers)
                    print(f"The Mean Absolute Deviation is: {result}")
                    break
            except ValueError:
                print("Invalid input. Please enter valid numbers.")