def filter_by_substring(strings, substring):
    return [s for s in strings if substring in s]

if __name__ == "__main__":
    strings = input("Enter a list of strings (space separated): ").split()
    while True:
        substring = input("Enter a substring to search: ")
        if not substring:
            break
        result = filter_by_substring(strings, substring)
        print(result)