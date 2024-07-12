return (
    [item for sublist in [[x, delimeter] for x in numbers[:-1]] for item in sublist]
    + numbers[-1:]
    if numbers
    else []
)