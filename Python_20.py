```
from typing import Tuple

def find_closest_elements() -> Tuple[float, float]:
    while True:
        try:
            task_description = input("Enter '1' for numbers from 1 to n, or any other key to use the entered numbers: ")
            if task_description == '1':
                n = int(input("Enter a number n: "))
                numbers = [i for i in range(1, n+1)]
                break
            else:
                numbers = input("Enter space-separated numbers: ").split()
                numbers = [float(num) for num in numbers]
                break
        except ValueError:
            print("Invalid input! Please enter a number or space-separated numbers.")

    min_diff = float("inf")
    closest_pair = ()

    if task_description == '1':
        for i in range(len(numbers)):
            for j in range(i + 1, len(numbers)):
                diff = abs(numbers[i] - numbers[j])
                if diff < min_diff:
                    min_diff = diff
                    closest_pair = (numbers[i], numbers[j])
    else:
        for i in range(len(numbers)):
            for j in range(i + 1, len(numbers)):
                diff = abs(numbers[i] - numbers[j])
                if diff < min_diff:
                    min_diff = diff
                    closest_pair = (numbers[i], numbers[j])

    return closest_pair

print(find_closest_elements())