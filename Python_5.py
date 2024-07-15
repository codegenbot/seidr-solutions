return [
    val for pair in zip(numbers, [delimeter] * (len(numbers) - 1)) for val in pair
] + ([] if not numbers else [numbers[-1]])