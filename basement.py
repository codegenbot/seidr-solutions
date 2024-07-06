def find_negative_sum(arr):
    total = 0
    index = 0
    while True:
        total += arr[index]
        if total < 0:
            return index + 1
        index += 1