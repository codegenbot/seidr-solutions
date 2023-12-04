```
def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)
```
The above code calculates the mean absolute deviation of a list of floating-point numbers. It first computes the arithmetic mean of the input numbers, then uses that mean to calculate the absolute difference between each number and the mean. Finally, it divides the sum of these differences by the length of the input list to obtain the mean absolute deviation.

The function signature specifies that the input should be a list of floating-point numbers, and that the output should be a single floating-point value representing the mean absolute deviation.