return (
    [x for pair in zip(numbers, [delimeter] * (len(numbers) - 1)) for x in pair]
    + [numbers[-1]]
    if numbers
    else []
)