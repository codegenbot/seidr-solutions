encoded_str = input("Enter the encoded string: ") 
for ch in encoded_str: 
    if ch.isalpha(): 
        if ch.isupper(): 
            char_code = ord("A") 
        else: 
            char_code = ord("a") 
        result += ( 
            chr((ord(ch) - char_code - shift) % 26 + char_code) 
            if "A" <= ch <= "Z" 
            else chr((ord(ch) - char_code - shift) % 26 + char_code) 
        ) 
    else: 
        result += ch