```
def remove_duplicates():
    input_str = input("Enter comma-separated numbers: ")
    return list(map(int, set(input_str.split(","))))