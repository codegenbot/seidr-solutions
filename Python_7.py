```
def filter_by_substring(strings, substring):
    return [s for s in strings if substring in s]

if __name__ == "__main__":
    while True:
        try:
            strings = input("Enter a list of strings (space separated): ").split()
            if not strings:  
                print("No strings entered. Please try again.")
            else:
                break
        except ValueError:
            print("Invalid input format. Please try again.")

    while True:
        substring = input("Enter a substring to search: ")
        if not substring:
            break
        try:
            result = filter_by_substring(strings, substring)
            print(result)
        except TypeError:
            print("Invalid substring entered. Please try again.")