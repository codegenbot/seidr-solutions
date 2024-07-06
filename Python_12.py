def process_strings():
    strings = []
    while True:
        user_input = input("Enter a string (or 'stop' to finish): ")
        
        if user_input.lower() == 'stop':
            break
        
        if not user_input.strip():
            print("Please enter a non-empty string.")
            continue

        if len(user_input) > 0 and strings:
            print(strings)
            strings = [] 
        elif len(user_input) > 0:
            strings.append(user_input)

    return strings

print(process_strings())