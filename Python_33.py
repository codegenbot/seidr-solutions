def sort_third(l: list):
    return sorted([sorted(group) for group in zip(*[iter(l)]*3]) )

# Example usage
result = sort_third([5, 6, 3, 4, 8, 9, 2, 1])
print(result)