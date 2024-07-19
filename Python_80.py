```
while True:
    s = input("Enter a string: ")
    try:
        if all(c.isalpha() or c.isdigit() for c in s):
            print(is_happy(s))
            break
        else:
            print("Invalid input. Please enter only alphabets and digits.")
    except ValueError:
        print("Invalid input. Please enter only alphabets and digits.")
    pass