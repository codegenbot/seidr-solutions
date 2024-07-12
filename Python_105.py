def by_length(arr):
    numbers_to_names = {
        1: "One",
        2: "Two",
        3: "Three",
        4: "Four",
        5: "Five",
        6: "Six",
        7: "Seven",
        8: "Eight",
        9: "Nine",
    }

    sorted_numbers = sorted([num for num in arr if 1 <= num <= 9])
    result = [numbers_to_names[num] for num in reversed(sorted_numbers)]
    return result