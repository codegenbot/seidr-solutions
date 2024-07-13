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
        pos = int(input())
        if 1 <= pos <= len(s):
            break
        else:
            print("Invalid input. Please enter a number between 1 and", len(s), "inclusive.")
            
    decoded = s[(pos - 2) % len(s)] + ''.join([s[i % len(s)] for i in range(1, pos)])
    return decoded