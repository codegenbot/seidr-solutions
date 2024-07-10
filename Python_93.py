def encode(text):
    encoded_text = ""
    for char in text:
        if char.isalpha():
            if char.isupper():
                encoded_text += char.lower()
            else:
                encoded_text += char.upper()
        else:
            encoded_text += char
    return encoded_text

def check(input_string):
    if input_string == "yes":
        output = encode("Hello")
    else:
        output = encode("Bye")
    
    return output