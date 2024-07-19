def find_unique_numbers(numbers):
    return list(set(numbers))


numbers = list(map(int, input("Enter numbers separated by spaces: ").split()))

print(find_unique_numbers(numbers))