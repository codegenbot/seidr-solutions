return (
    [item for sublist in [[num, delimeter] for num in numbers[:-1]] for item in sublist]
    + [numbers[-1]]
    if numbers
    else []
)