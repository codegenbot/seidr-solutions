def remove_duplicates():
    numbers = input("Enter comma-separated numbers: ")
    return sorted(list(set(map(int, (numbers.split(","))))))