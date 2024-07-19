```
def is_happy(n):
    if n < 1:
        return False
    while n != 1 and n != 4:
        n = sum(int(i) ** 2 for i in str(n))
    return n == 1

s = input("Enter a string: ")
s = "".join(filter(str.isdigit, s))
if not s:
    print("Invalid input. Please enter at least one digit.")
else:
    try:
        n = int(s)
        if all(c.isalpha() or c.isdigit() for c in str(n)):
            print(is_happy(n))
        else:
            print("Invalid input. Please enter only alphabets and digits.")
    except ValueError:
        print("Invalid input. Please enter only alphabets and digits.")