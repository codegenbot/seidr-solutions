```
while True:
    try:
        text = input("Enter a text: ")
        result = fix_spaces(text)
        print(result)
        print("Please enter text to continue...")
        break
    except (ValueError, EOFError):
        print("Please enter valid input. Try again!")