def by_length(arr):
    result = sorted([str(x) for x in arr if 1 <= x <= 9])
    result.reverse()
    names = {
        "1": "One",
        "2": "Two",
        "3": "Three",
        "4": "Four",
        "5": "Five",
        "6": "Six",
        "7": "Seven",
        "8": "Eight",
        "9": "Nine",
    }
    return [names[x] for x in result]