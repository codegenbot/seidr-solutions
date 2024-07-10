return [
    val
    for pair in zip(numbers, [delimeter] * (len(numbers) - 1) + [delimeter])
    for val in pair
]