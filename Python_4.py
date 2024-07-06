```
def mean_absolute_deviation(numbers: List[float]) -> float:
    four_space_indented_mean =     sum(numbers) / len(numbers)
    return                         sum(abs(num - four_space_indented_mean) for num in numbers) / len(numbers)