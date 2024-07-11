def by_length(arr):
    names = {
        "One": 1,
        "Two": 2,
        "Three": 3,
        "Four": 4,
        "Five": 5,
        "Six": 6,
        "Seven": 7,
        "Eight": 8,
        "Nine": 9,
    }
    sorted_arr = sorted([i for i in arr if 1 <= i <= 9])
    return [
        list(names.keys())[list(names.values()).index(i)] for i in reversed(sorted_arr)
    ]