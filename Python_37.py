def sort_even(l: list):
    evens = [x for x in l if x % 2 == 0]
    return [x if i >= len(evens) else (evens[::-1][i - len(evens)]) 
            for i, x in enumerate(l)]