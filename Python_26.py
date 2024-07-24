def remove_duplicates(lst):
    return [num for num in lst if lst.count(num) == 1]


def find_unique_numbers(numbers):
    return remove_duplicates(numbers)