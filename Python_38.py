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
            
    decoded = ""
    while True:        
        for i in range(len(s) * 2):
            if i < (pos - 1) // 2:
                decoded += s[i % len(s)]
            else:
                decoded += s[(i - 1) % len(s)]
        cont = str(input("Do you want to decode again? (yes/no): "))
        if cont.lower() == 'no':
            return decoded