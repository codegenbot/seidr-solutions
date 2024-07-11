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
    sorted_arr = sorted([num for num in arr if 1 <= num <= 9])
    return [names[i] for i in range(len(sorted_arr) - 1, -1, -1)]