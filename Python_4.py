from typing import List


def mean_absolute_deviation():
    print("Enter some numbers (type 'done' when finished): ")
    numbers = []
    while True:
        num = input().strip()
        if num.lower() == "done":
            break
        try:
            numbers.append(float(num))
        except ValueError:
            print("Invalid input. Please try again.")
    if not numbers or any(x <= 0 for x in numbers):
        print("Please enter positive numbers.")
    else:
        mean = sum(numbers) / len(numbers)
        return round(sum(abs(num - mean) for num in numbers) / len(numbers), 2)


print(mean_absolute_deviation())