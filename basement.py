def first_negative_index(numbers):
    return next((i for i, x in enumerate(numbers) if sum(numbers[:i+1]) < 0), None)