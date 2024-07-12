```
while True:
    try:
        input_str = input("Enter a music string: ")
        if not isinstance(input_str, str) or len(input_str.strip()) == 0:
            raise Exception
        break
    except Exception:
        print("Invalid input. Please enter a string with at least one character.")
print(parse_music(input_str))