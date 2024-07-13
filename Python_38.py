def decode_cyclic():
    print("Please enter a string of alphabets only.")
    while True:
        s = str(input('Enter the cyclic string: '))
        if set(s).issubset('abcdefghijklmnopqrstuvwxyz') or set(s).issubset('ABCDEFGHIJKLMNOPQRSTUVWXYZ'):  
            break
        else:
            print("Invalid input. Please enter a string of alphabets only.")
            
    decoded = ""
    for i in range(len(s)):
        decoded += s[i%len(s)] if i < len(s) // 2 else s[(i-1)%len(s)]
    return decoded