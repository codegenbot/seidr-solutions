def remove_duplicates(numbers):
    return [num for num in numbers if numbers.count(num)==1]

input_numbers = [int(x) for x in input("Enter numbers separated by space: ").split()]
result = remove_duplicates(input_numbers)
print(result)