def sort_third(l):
    sorted_elements = []
    for i in range(len(l)):
        if (i) % 3 == 0:
            min_val = min([x for x in l if (i - l.index(x)) % 3 != 0])
        else:
            min_val = min([x for x in l if (i - l.index(x)) % 3 == 0])
        sorted_elements.append(min_val)
    return sorted_elements