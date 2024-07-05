def by_length(arr):
    digit_names = ["One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"]
    filtered = [x for x in arr if 1 <= x <= 9]
    filtered.sort(reverse=True)
    return [digit_names[x-1] for x in filtered]