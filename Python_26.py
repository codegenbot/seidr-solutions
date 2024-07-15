def remove_duplicates(numbers):
    def find_unique_numbers(numbers):
        return [num for num in numbers if numbers.count(num) == 1]
    
    return find_unique_numbers(numbers)

print(remove_duplicates([1, 2, 2, 3, 4, 4, 5]))