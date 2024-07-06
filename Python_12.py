```
strings = []
i = 0
while True:
    i += 1
    user_input = input(f"Enter string {i}(or 'stop' to finish): ")
    
    if not user_input.strip() and user_input.lower() != 'stop':
        print("Please enter a non-empty string.")
        continue

    if user_input.lower() == 'stop':
        break
    elif len(user_input) > 0 and strings:
        print(strings)
        strings = [] 
    elif len(user_input) > 0:
        strings.append(user_input)