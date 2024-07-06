strings = []
while True:
    user_input = input("Please enter a string or 'stop' to finish: ")
    if user_input.lower() == 'stop':
        break
    try:
        strings.append(user_input.strip())
    except Exception as e:
        print(f"Invalid input. Please enter a valid string: {e}")
if not strings:
    print("No input provided.")
else:
    print(" ".join(strings))