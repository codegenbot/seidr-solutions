def process_music(input_str):
    output = ""
    for char in input_str:
        if char == "o":
            output += "o "
        else:
            output += char
    return output

print(process_music("Hello o-o World!"))