def filter_by_substring(strings, substring):
    return [s for s in strings if substring in s]

if __name__ == "__main__":
    strings = [s.strip() for s in input("Enter a list of strings (space separated): ").split()]
    if not strings:  
        print("No strings entered. Please try again.")
    else:
        while True:
            substring = input("Enter a substring to search: ")
            if not substring:
                break
            result = filter_by_substring(strings, substring)
            print(result)