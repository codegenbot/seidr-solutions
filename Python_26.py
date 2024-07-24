def find_unique_numbers(numbers):
    def remove_duplicates(lst):
        return [num for num in lst if lst.count(num) == 1]

    return remove_duplicates(numbers)