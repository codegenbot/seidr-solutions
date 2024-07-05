def sort_even_indices(l):
    even_indices_values = sorted(l[::2])
    l[::2] = even_indices_values
    return l

# Assuming there's a check function to verify your solution
check(sort_even_indices)