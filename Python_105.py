def by_length(arr):
    result = [i for i in arr if 1 <= i <= 9]
    result.sort()
    result.reverse()
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
    return [names[i] for i in result]