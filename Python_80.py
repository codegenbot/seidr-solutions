def sum_of_squares(n):
    return sum(int(i) ** 2 for i in str(n))

def is_happy(n):
    seen = set()
    while n != 1 and n not in seen:
        seen.add(n)
        n = sum_of_squares(n)
    return n == 1

while True:
    s = input("Enter a string: ")
    try:
        if all(c.isalpha() or c.isdigit() for c in s):
            print(is_happy(int(s)))
            break
        else:
            print("Invalid input. Please enter only alphabets and digits.")
    except ValueError:
        print("Invalid input. Please enter only alphabets and digits.")