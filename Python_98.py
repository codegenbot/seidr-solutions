def count_upper(s): 
    return sum(1 for i, c in enumerate(s) if 'A' <= c <= 'E' and i % 2 == 0)