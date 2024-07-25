def decode_cyclic(): 
    while True: 
        s = input("Enter a cyclically encoded string: ") 
        if len(s) % 3 == 0 and all(char.isalpha() or char.isdigit() for char in s): 
            return s 
        print("Invalid input! Please enter a string that can be divided evenly into groups of 3, where the first two characters are letters and the third character is either a letter or a number.")