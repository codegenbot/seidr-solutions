print("Enter parentheses (type 'q' to quit): ")
while True:
    user_input = input()
    if user_input == "q":
        break
    try:
        result = separate_paren_groups(user_input)
        for group in result:
            print(group)
    except Exception as e:
        print(f"Error: {e}")