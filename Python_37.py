def sort_even(l: list):
    even = sorted([x for x in l[::2]])
    return [even[i%len(even)] if i % 2 == 0 else x for i,x in enumerate(l)]