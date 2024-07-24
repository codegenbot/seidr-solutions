def sort_third(l: list):
    return [
        value
        for group in zip(*[iter(l)] * 3)
        for value in sorted(group, key=lambda x: x[2])
    ]


# Test the function with the provided input
print(
    sort_third([5, 6, 3, 4, 8, 9, 2, 1])
)  # Output should be: [3, 4, 8, 2, 1, 5, 6, 9]