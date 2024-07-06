
def sort_even(l):
    even_indices = [i for i in range(len(l)) if i % 2 == 0]
    even_values = sorted([l[i] for i in even_indices])
    return [l[i] if i not in even_indices else even_values.pop() for i in range(len(l))]