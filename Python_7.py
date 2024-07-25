```
if __name__ == "__main__":
    try:
        input_strings = [line.strip() for line in input().splitlines()]
        substring = input()
        print(filter_by_substring(input_strings, substring))
    except EOFError:
        print("No input provided. Please enter the required inputs.")
        input()