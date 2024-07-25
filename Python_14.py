def all_prefixes(string):
    return [string[: i + 1] for i in range(len(string)]

if __name__ == "__main__":
    input_string = input().strip()
    if not input_string:
        print("Please enter a valid input string.")
    else:
        prefixes = all_prefixes(input_string)
        print(prefixes)