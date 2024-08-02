def manipulate_numbers(numbers):
    return (
        [item for sublist in [[num, delimeter] for num in numbers[:-1]] for item in sublist]
        + [numbers[-1]]
        if numbers
        else []
    )

numbers = [1, 2, 3, 4, 5]  # example input
result = manipulate_numbers(numbers)
print(result)