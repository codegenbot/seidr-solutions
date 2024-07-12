strings = input("Enter space separated strings: ").lower().split()
substring = input("Enter a substring to search: ").lower()

def filter_by_substring(strings, substring):
    return [s for s in strings if substring in s]

if not strings or not substring:
    print("Please provide valid input.")
else:
    result = filter_by_substring(strings, substring)
    if not result:
        print("No strings contain the given substring.")
    else:
        print(result)