def complete_code(numbers, delimiter):
    return (
        [x for pair in zip(numbers, [delimiter] * (len(numbers) - 1)) for x in pair]
        + numbers[-1:]
        if numbers
        else []
    )