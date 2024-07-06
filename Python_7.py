def filter_by_substring(strings, substring):
    return [s for s in strings if substring in s]

if __name__ == "__main__":
    input_str = input("Enter a list of strings (space separated):")
    strings = [word for word in input_str.split()]
    while True:
        substring = input("Enter a substring to search (or press enter to quit):")
        if not substring:
            break
        result = filter_by_substring(strings, substring)
        print(result)