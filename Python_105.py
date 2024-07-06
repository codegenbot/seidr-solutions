def by_length(arr):
    num_names = {
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
    result = sorted([num for num in arr if 1 <= num <= 9])
    return [num_names[num] for num in result[::-1]]