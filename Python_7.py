```
if __name__ == "__main__":
    strings = [input("Enter a list of strings (space separated): ") for _ in range(int(input("Enter number of strings: ")))].split()
    while True:
        substring = input("Enter a substring to search: ")
        if not substring:
            break
        result = filter_by_substring(strings, substring)
        print(result)