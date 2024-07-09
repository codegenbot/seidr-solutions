```
def sort_even(l):
    result = []
    for i in range(len(l)):
        even_indices = [x for x in range(len(l)) if (x - i) % 2 == 0]
        if i in even_indices:
            result.append(sorted([l[j] for j in even_indices])[::-1][i % 2])
        else:
            result.append(l[i])
    return result