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
        if len(strings) > 0 and strings[0] == ' ': 
            strings = strings[1:]
        if len(strings) > 0 and strings[-1] == ' ': 
            strings = strings[:-1]
        print(" ".join(map(str.strip, strings.split())))