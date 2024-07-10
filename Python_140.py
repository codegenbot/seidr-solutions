while True:
    try:
        text = input("Enter a text: ")
        result = fix_spaces(text)
        print(result)
    except (ValueError, EOFError):
        print("Please enter valid input. Try again!")