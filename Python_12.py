strings = []
i = 0
while True:
    user_input = input(f"Enter string {i+1}: ")
    if len(user_input) > 0:
        strings.append(user_input)
        break
    else:
        print("Please enter a non-empty string.")