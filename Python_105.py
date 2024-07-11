def by_length(arr):
    sorted_arr = sorted([i for i in arr if 1 <= i <= 9])
    reversed_arr = sorted_arr[::-1]
    return [num_dict[i] for i in reversed_arr]


num_dict = {
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