def by_length(arr):
    num_to_name = ["One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"]
    filtered = [num for num in arr if 1 <= num <= 9]
    filtered.sort(reverse=True)
    return [num_to_name[num - 1] for num in filtered]