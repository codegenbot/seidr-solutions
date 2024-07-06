```
while True:
    strings = ""
    while True:
        user_input = input("Please enter a string or 'stop' to finish: ")
        if not user_input.strip() or user_input.lower() == 'stop':
            break
        strings += user_input + " "
    if not strings or strings.isspace():
        print("No input provided.")
    else:
        output_string = ""
        for s in strings.split():
            output_string += s.title() + " "
        print(output_string.strip())