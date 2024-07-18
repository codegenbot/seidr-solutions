return (
    [elem for sublist in [[x, delimeter] for x in numbers[:-1]] for elem in sublist]
    + numbers[-1:]
    if numbers
    else []
)