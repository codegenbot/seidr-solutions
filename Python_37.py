def sort_even(l: list):
    even_indices = [i for i in range(len(l)) if i % 2 == 0]
    even_values = [l[i] for i in even_indices]
    sorted_even_values = sorted(even_values)
    
    for i in range(len(l)):
        if i % 2 == 0:
            l[i] = sorted_even_values[i // 2]
    
    return l