def by_length(arr):
    names = [
        "Zero",
        "One",
        "Two",
        "Three",
        "Four",
        "Five",
        "Six",
        "Seven",
        "Eight",
        "Nine",
    ]
    sorted_arr = sorted([i for i in arr if 1 <= i <= 9])
    return [names[i] for i in reversed(sorted_arr)]