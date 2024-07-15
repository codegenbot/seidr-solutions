return [
    val for pair in zip(numbers, [delimeter] * (len(numbers) - 1) + [0]) for val in pair
]