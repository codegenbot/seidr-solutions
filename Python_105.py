def by_length(arr):
    return [num_to_name[num] for num in sorted(filter(lambda x: 1 <= x <= 9, arr), reverse=True)]

num_to_name = {
    1: "One",
    2: "Two",
    3: "Three",
    4: "Four",
    5: "Five",
    6: "Six",
    7: "Seven",
    8: "Eight",
    9: "Nine"
}