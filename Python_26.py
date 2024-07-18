def remove_duplicates(numbers):
    unique_nums = set()
    duplicates = set()
    for num in numbers:
        if num not in duplicates:
            if num in unique_nums:
                unique_nums.remove(num)
                duplicates.add(num)
            else:
                unique_nums.add(num)
    return [num for num in numbers if num in unique_nums]

numbers = list(map(int, input("Enter a list of numbers separated by spaces: ").split()))
output = remove_duplicates(numbers)
print(output)