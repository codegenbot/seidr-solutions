def sort_even(l: list):
    even_values = sorted(l[::2])
    sorted_list = [even_values[i//2] if i % 2 == 0 else l[i] for i in range(len(l))]
    return sorted_list