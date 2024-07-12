def sort_third(l: list):
    try:
        return sorted(l, key=lambda x: x[2])
    except (IndexError, TypeError):
        return []

# Test the function with a list of lists
print(sort_third([[5, 6, 3], [4, 8, 9], [2, 1, 7]]))