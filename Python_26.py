def check(remove_duplicates):
    def find_unique_numbers(numbers):
        return [num for num in numbers if numbers.count(num) == 1]