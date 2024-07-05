def sort_even_indices(l):
    even_indices_values = sorted(l[::2])
    l[::2] = even_indices_values
    return l

# Assuming check is a function that tests your sort_even_indices function
# Use the correct function name
check(sort_even_indices)