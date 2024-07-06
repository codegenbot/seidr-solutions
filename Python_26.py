```
def remove_duplicates(input_str=None):
    if input_str is None:
        numbers = input("Enter comma-separated numbers: ")
    else:
        numbers = ",".join(map(str, input_str))
    return [int(num) for num in set(map(int, numbers.split(",")))]