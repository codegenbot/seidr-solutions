def remove_duplicates(input_str):
    numbers = list(map(int, input_str.split()))
    return list(set(numbers))

if __name__ == "__main__":
    print(remove_duplicates("1 2 3 4 5 6"))