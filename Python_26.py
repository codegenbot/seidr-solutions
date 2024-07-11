```
input_string = input("Enter a list of integers (comma separated): ")
try:
    result = remove_duplicates(input_string)
    print(','.join(map(str, result)))
except ValueError as e:
    print(f"Invalid input: {e}")