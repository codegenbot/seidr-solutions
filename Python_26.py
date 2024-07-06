```
def remove_duplicates():
    numbers = input("Enter comma-separated numbers: ")
    return list(set(map(int, numbers.split(","))))