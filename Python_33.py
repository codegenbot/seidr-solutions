def sort_third(l: list):
    return [value for i in range(0, len(l), 3) for value in sorted(l[i:i+3])]

print(sort_third([5, 6, 3, 4, 8, 9, 2, 1]))