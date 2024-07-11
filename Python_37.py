def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    odd_index = len(evens)
    return [x if i % 2 != 0 else evens[i%len(evens)] 
            for i, x in enumerate(sorted(l))]