def sort_even_indices(l):
    even_indices = [l[i] for i in range(0, len(l), 2)]
    even_indices.sort()
    for i, val in enumerate(even_indices):
        l[i * 2] = val
    return l

# Call the function to test
print(sort_even_indices([4, 3, 2, 1, 5]))