def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))


input_string = input("Enter a list of numbers: ")
input_numbers = list(map(int, input_string.split()))
result = remove_duplicates(input_numbers)
print(result)