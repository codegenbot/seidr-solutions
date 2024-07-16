return [
    x for i, x in enumerate(numbers) if i != len(numbers) - 1 for _ in (x, delimeter)
]