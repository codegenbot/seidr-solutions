```
def decode_cyclic():
    print("Enter a cyclically encoded string: ")
    while True:
        s = input()
        if len(s) % 3 == 0 and all(char.isalpha() for char in s[:2]) and all(char.isalnum() for char in s):
            break
        print("Invalid input! Please enter a string that can be divided evenly into groups of 3, where the first two characters are letters and the third character is either a letter or a number.")
    return s