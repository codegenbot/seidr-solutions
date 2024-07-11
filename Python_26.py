def remove_duplicates(numbers):
    num_count = {}
    for num in numbers:
        num_count[num] = num_count.get(num, 0) + 1
    return [num for num, count in num_count.items() if count == 1]