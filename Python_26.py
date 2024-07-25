def find_numbers_appeared_only_once(numbers):
    return [num for num in numbers if numbers.count(num) == 1]


find_numbers_appeared_only_once([1, 2, 2, 3, 4, 4, 5])