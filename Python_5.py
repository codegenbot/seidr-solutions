def complete_code(numbers, delimiter):
    return [
        val for pair in zip(numbers, [delimiter] * (len(numbers) - 1) + [0]) for val in pair
    ]

# Call the function with appropriate arguments
result = complete_code([1, 2, 3, 4, 5], '-')
print(result)