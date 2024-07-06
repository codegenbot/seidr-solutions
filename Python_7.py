```
if __name__ == "__main__":
    strings = input("Enter a list of strings (space separated): ").split()
    if not strings:  
        print("No strings entered. Please try again.")
    else:
        while True:
            substring = input("Enter a substring to search: ")
            result = filter_by_substring(strings, substring)
            print(result)
            response = input("Search again? (y/n): ")
            if response.lower() != 'y':
                break