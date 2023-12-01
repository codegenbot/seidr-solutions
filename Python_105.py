def by_length(arr):
    return [digit_names[i] for i in sorted(arr) if 1 <= i <= 9][::-1]

digit_names = {
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