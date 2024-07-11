def fix_spaces(text):
    text = text.strip()
    while "  " in text:
        text = text.replace("  ", " ")
    return text

while True:
    try:
        text = input("Enter a text: ")
        for char in text:
            if not char.isalnum() and not char.isspace():
                print("Please enter valid input. Try again!")
                break
        else:
            result = fix_spaces(text)
            print(result)
    except (ValueError, EOFError):
        print("Please enter valid input. Try again!")