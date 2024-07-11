while True:
    try:
        text = input("Enter a text (or 'quit' to exit): ")
        if text.lower() == 'quit':
            break
        result = fix_spaces(text)
        print(result)
    except (ValueError, EOFError):
        print("Please enter valid input. Try again!")