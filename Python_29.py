def main():
    while True:
        strings = input("Enter a list of strings (space-separated): ")
        prefix = input("Enter a prefix: ")

        if not strings or not prefix:
            print("Please enter valid inputs!")
        else:
            filtered_strings = [
                s.strip() for s in strings.split() if s.strip().startswith(prefix)
            ]
            return filtered_strings


result = main()
print(result)