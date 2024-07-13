```
def decode_cyclic():
    print("Please enter a string of alphabets only.")
    while True:
        s = str(input('Enter the cyclic string: '))
        if set(s).issubset('abcdefghijklmnopqrstuvwxyz') or set(s).issubset('ABCDEFGHIJKLMNOPQRSTUVWXYZ'):  
            break
        else:
            print("Invalid input. Please enter a string of alphabets only.")
            
    print("Please enter the position at which you want to decode (1-indexed):")
    while True:
        try:
            pos = int(input())
            if 1 <= pos <= len(s):
                break
            else:
                print("Invalid input. Please enter a number between 1 and", len(s), "inclusive.")
        except ValueError:
            print("Invalid input. Please enter an integer.")
            
    decoded = ""
    for i in range(pos - 1, len(s) * 2):
        if i % len(s) < (pos - 1) % len(s):
            decoded += s[i % len(s)]
        else:
            decoded += s[(i - pos + 1) % len(s)]
    return decoded