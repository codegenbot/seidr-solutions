```
def decode_cyclic():
    print("Please enter a string of alphabets only.")
    while True:
        s = str(input('Enter the cyclic string: '))
        if set(s).issubset('abcdefghijklmnopqrstuvwxyz') or set(s).issubset('ABCDEFGHIJKLMNOPQRSTUVWXYZ'):  
            break
        else:
            print("Invalid input. Please enter a string of alphabets only.")
            
    print("Please enter the rotation length (integer):")
    while True:
        n = int(input())
        if 1 <= n <= len(s):
            break
        else:
            print("Invalid input. The rotation length must be between 1 and", len(s))
            
    decoded = ""
    for i in range(len(s)):
        decoded += s[i%len(s)] if i < n//2 else s[(i-1)%n]
    return decoded