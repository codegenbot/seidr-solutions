def remove_duplicates(input_string: str) -> List[int]:
    return list(set(map(int, input_string.split(','))))


result = remove_duplicates(input("Enter your string (e.g., 1,2,3): "))
print(result)