def sort_even(l: list):
    even_indices = [i for i in range(len(l)) if i % 2 == 0]
    sorted_evens = sorted([l[i] for i in even_indices])
    result = []
    for i in range(len(l)):
        if i % 2 == 0:
            result.append(sorted_evens.pop(0))
        else:
            result.append(l[i])
    return result