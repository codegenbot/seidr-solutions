```
def filter_by_substring(strings, substring):
    return [s for s in strings if substring in s]

if __name__ == "__main__":
    while True:
        strings_input = input("Enter a list of strings (space separated):")
        if strings_input.strip():
            break
        print("Please enter a valid string.")
    strings = strings_input.split()
    while True:
        substring = input("Enter a substring to search (or press enter to quit):")
        if not substring.strip():
            break
        result = filter_by_substring(strings, substring)
        print(result)