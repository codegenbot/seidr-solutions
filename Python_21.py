def rescale_to_unit(numbers: List[float]) -> List[float]:
    if len(numbers) < 2:
        return []
    min_num = min(numbers)
    max_num = max(numbers)
    return (
        [(x - min_num) / (max_num - min_num) for x in numbers]
        if all(isinstance(x, float) for x in numbers)
        else []
    )


# Read input from user
numbers = [
    float(x) for x in input("Enter a list of numbers separated by spaces: ").split()
]
# Call the function with user input
output = rescale_to_unit(numbers)
print(output)