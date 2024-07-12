def by_length(arr):
    result = sorted([str(i) for i in arr if 1 <= i <= 9])
    return [names[int(i) - 1] for i in reversed(result)]


names = ["Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"]