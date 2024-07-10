def by_length(arr):
    result = sorted([str(num) for num in arr if 1 <= num <= 9])
    result.reverse()
    return [names[int(i) - 1] for i in result]


names = ["One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"]