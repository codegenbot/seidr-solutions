def by_length(arr):
    return [ 
        "One" if x == 1 else 
        "Two" if x == 2 else 
        "Three" if x == 3 else 
        "Four" if x == 4 else 
        "Five" if x == 5 else 
        "Six" if x == 6 else 
        "Seven" if x == 7 else 
        "Eight" if x == 8 else 
        "Nine" if x == 9 else 
        "" 
        for x in sorted([num for num in arr if 1 <= num <= 9], reverse=True)
    ]