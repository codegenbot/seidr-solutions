```
from typing import List
import statistics

def mean_absolute_deviation(again=False):
    if not again:
        print("Please enter the numbers you want to calculate Mean Absolute Deviation (MAD) for, separated by a space: ")
    while True:
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
                    while True:
                        print("Would you like to calculate Mean Absolute Deviation again? (yes/no): ")
                        response = input().strip()
                        if response.lower() == "no":
                            return  # Stop recursion
                        elif response.lower() != "yes":
                            print("Invalid input. Please enter 'yes' or 'no'.")
            except ValueError:
                print("Invalid input. Please enter valid numbers.")
    mean_absolute_deviation(True)