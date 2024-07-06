```
while True:
    choice = input("Do you want to enter more strings? (yes/no): ")
    if choice.lower() == 'no':
        break

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
            words = s.title().split()
            output_string += ' '.join(words) + " "
        print(output_string.strip())