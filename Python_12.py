```
def process_strings():
    strings = []
    while True:
        user_input = input("Enter a string (or 'stop' to finish): ")
        
        if user_input.lower() == 'stop':
            break
        elif len(user_input.strip()) > 0:
            strings.append(user_input)
            if len(strings) >= 2:
                print(strings)
                strings = [] 
    return strings

print(process_strings())