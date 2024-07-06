input_type = input(
    "What type of {} would you like to count? (strings or integers) ".format(
        input_type.capitalize()
    )
).lower()
strings = input(
    "Please enter a list of {} (separated by any character): ".format(input_type)
).strip()
if not strings or strings.isspace():
    print("No input provided.")
else:
    print(" ".join(map(str.strip, strings.split())))