def prefixes(string):
    return [string[:i] for i in range(1, len(string) + 1)]

try:
    input_string = input("Enter a string: ").strip()
    if input_string:
        print("\n".join(prefixes(input_string)))
    else:
        print("No input provided.")
except (EOFError, KeyboardInterrupt):
    print("No input provided.")