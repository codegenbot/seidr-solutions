input_string = input("Enter a list of integers (comma separated): ")
try:
    result = remove_duplicates(input_string)
    print(','.join(map(str, result)))
except ValueError as e:
    print(f"Invalid input: {e}")

def remove_duplicates(input_string):
    input_list = [int(x) for x in input_string.split(',')]
    return sorted(list(set(input_list)))