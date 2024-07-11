def by_length(arr):
    new_arr = sorted([str(i) for i in arr if 1 <= i <= 9])
    return [
        {
            "One": 1,
            "Two": 2,
            "Three": 3,
            "Four": 4,
            "Five": 5,
            "Six": 6,
            "Seven": 7,
            "Eight": 8,
            "Nine": 9,
        }[str(i)]
        for i in reversed(new_arr)
    ]