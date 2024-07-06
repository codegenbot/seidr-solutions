```
def filter_by_substring(strings, substring):
    return [s for s in strings if substring in s]

if __name__ == "__main__":
    while True:
        strings_str = input("Enter a list of strings (space separated):")
        if not strings_str.strip():
            print("No input provided. Please provide a valid input.")
            continue
        strings = strings_str.split()
        
        while True:
            substring = input("Enter a substring to search (or press enter to quit):")
            if not substring.strip() and strings:
                break
            if not substring.strip():
                if len(strings) == 0:
                    print("No more inputs. Goodbye!")
                    break
                else:
                    continue
            result = filter_by_substring(strings, substring)
            print(result)