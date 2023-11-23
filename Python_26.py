def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))

numbers = input("Enter a list of numbers: ").split()

numbers = list(map(int, numbers))

result = remove_duplicates(numbers)
print(result)