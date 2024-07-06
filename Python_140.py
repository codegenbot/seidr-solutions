```
text = input("Enter a string: ")
if not text:
    print("Error: Please enter a valid string.")
else:
    try:
        text = ' '.join(text.split())  
        result = fix_spaces(text)
        print(result)
    except ValueError as ve:
        print(f"Error: {ve}")