def camel_case(input_str):
    input_str += " "
    temp = ""
    for char in input_str:
        if char == "-":
            temp += char.next[0].upper() + char[1:].lower()
        else:
            temp += char
    return temp