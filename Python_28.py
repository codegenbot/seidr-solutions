strings = ""
while True:
    user_input = input("Please enter a string or 'stop' to finish: ")
    if user_input.lower() == 'stop':
        break
    strings += user_input + " "

if not strings or strings.isspace():
    print("No input provided.")
else:
    print(" ".join(map(str.strip, strings.split())))