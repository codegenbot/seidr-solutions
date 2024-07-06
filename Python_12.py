strings = []
i = 0
while True:
    user_input = input(f"Enter string {i+1} (or 'stop' to finish): ")
    if user_input.lower() == 'stop':
        break
    elif len(user_input.strip()) > 0 and strings:
        print(strings)
        strings = [] 
    elif len(user_input.strip()) > 0:
        strings.append(user_input)
    else:
        print("Please enter a non-empty string.")
    i += 1