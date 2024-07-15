def sort_third(l: list):
    return [sorted([l[i], l[i+1], l[i+2]]) for i in range(0, len(l), 3)]

# Ensure that the input list has a length that is a multiple of 3 before sorting