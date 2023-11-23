from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = sum(abs(num - mean) for num in numbers) / len(numbers)
    return deviation

while True:
    user_input = input("Enter the numbers: ")
    if user_input:
        numbers = user_input.split(" ")
        try:
            numbers = list(map(float, numbers))
            break
        except ValueError:
            print("Invalid input. Please enter numbers separated by spaces.")
    else:
        print("No numbers entered. Please try again.")

result = mean_absolute_deviation(numbers)
print(result)