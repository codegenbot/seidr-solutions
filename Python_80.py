```
s = input("Enter a string: ")
s = "".join(filter(str.isdigit, s))
if not s:
    print("Invalid input. Please enter at least one digit.")
else:
    try:
        n = int(s)
        if all(c.isalpha() or c.isdigit() for c in str(n)):
            print(is_happy(n))
            break
        else:
            print("Invalid input. Please enter only alphabets and digits.")
    except ValueError:
        print("Invalid input. Please enter only alphabets and digits.")