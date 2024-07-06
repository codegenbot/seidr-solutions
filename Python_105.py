def by_length(arr):
    new_arr = sorted([i for i in arr if 1 <= i <= 9])
    new_arr.reverse()
    result = [
        name
        for num in new_arr
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
        if str(num) == str(name[:-3])
    ]
    return result