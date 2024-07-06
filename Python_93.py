def encode(input_string, output_string):
    result = ""
    for char in input_string:
        if char.isalpha():
            ascii_value = ord(char.lower()) - 97
            if char.isupper():
                ascii_value += 65
            if ascii_value < len(output_string):
                result += output_string[ascii_value]
            else:
                result += char
        else:
            result += char
    return result

print(encode("I DoNt KnOw WhAt tO WrItE", "k dQnT kNqW wHcT Tq wRkTg"))