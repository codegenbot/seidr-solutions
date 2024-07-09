def process_numbers(numbers, delimeter):
    return (
        [x for pair in zip(numbers, [delimeter] * (len(numbers) - 1)) for x in pair]
        + numbers[-1:]
        if numbers
        else []
   )

# Call the function with appropriate arguments
result = process_numbers(numbers, delimiter)
print(result)