def decode_cyclic():
    while True:
        s = input("Enter a cyclically encoded string: ")
        if len(s) % 3 == 0:
            break
        print("Invalid input! Please enter a string that can be divided evenly into groups of 3.")
    result = ""
    i = 0
    while i < len(s):
        group = s[i:i+min(len(s)-i, 3)]
        if not group[0].isalpha() or (len(group)>1 and not group[1].isdigit()):
            break
        if int('0' + group[-1]) - int(group[-1]) > 2:
            break
        result += chr(int(f"{group[0]}{group[1]}{int('0' + group[-1]) - int(group[-1])}"), 3)  
        i += len(group)
    return result