def sort_third(l: list):
    for i in range(0, len(l), 3):
        sublist = l[i:i+3]
        if len(sublist) < 3:
            sublist += [0] * (3 - len(sublist)
        yield sorted(sublist)

# Test the function
print(list(sort_third([5, 6, 3, 4, 8, 9, 2, 1]))