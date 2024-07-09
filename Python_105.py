def by_length(arr):
    return [ 
        "One" if i == 1 else
        "Two" if i == 2 else
        "Three" if i == 3 else
        "Four" if i == 4 else
        "Five" if i == 5 else
        "Six" if i == 6 else
        "Seven" if i == 7 else
        "Eight" if i == 8 else
        "Nine" if i == 9 else
        None
        for i in sorted(filter(lambda x: 1 <= x <= 9, arr), reverse=True)
    ] if arr else []