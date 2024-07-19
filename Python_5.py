return (
    [item for sublist in [[n, delimeter] for n in numbers[:-1]] for item in sublist]
    + numbers[-1:]
    if numbers
    else []
)