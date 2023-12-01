from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    absolute_deviations = [abs(x - mean) for x in numbers]
    return sum(absolute_deviations) / len(absolute_deviations)


if __name__ == "__main__":
    # Read input from user
    numbers = input("Enter a list of numbers separated by spaces: ").split()
    numbers = [float(num) for num in numbers]

    # Call the function and print the result
    result = mean_absolute_deviation(numbers)
    print(f"The mean absolute deviation is: {result}")