def by_length(arr):
    return [num_to_name[num] for num in sorted(arr) if 1 <= num <= 9][::-1]

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