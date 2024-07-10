def by_length(arr):
    result = sorted([i for i in arr if 1 <= i <= 9])
    result.reverse()
    return [
        name
        for i in result
        for name in [
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
        if str(i) == str(name[3:])
    ][::-1]