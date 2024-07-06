strings = input("Please enter a list of strings (separated by any character): ").strip()
if not strings or strings.isspace():
    print("No input provided.")
else:
    print(" ".join(map(str.strip, strings.split())))