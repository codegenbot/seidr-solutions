def camel_case(input_str):
    output_str = ""
    temp_str = ""
    for char in input_str:
        if char != '-':
            temp_str += char
        else:
            if temp_str != "":
                output_str += temp_str.capitalize()
                temp_str = ""
    if temp_str != "":
        output_str += temp_str.capitalize()
    return output_str

input_str = input()
print(camel_case(input_str))