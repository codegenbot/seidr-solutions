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
        
        if not strings:
            print("No more inputs. Goodbye!")
            break
        
        while True:
            substring = input("Enter a substring to search (or press enter to quit):")
            if not substring.strip() and strings:
                break
            if not substring.strip():
                print("No more inputs. Goodbye!")
                break
            result = filter_by_substring(strings, substring)
            print(result)