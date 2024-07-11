```
def camel_case(input_str):
    output_str = ""
    i = 0
    for c in input_str:
        if c == '-':
            i += 1
        elif i > 0:
            output_str += c.capitalize()
            i -= 1
        else:
            output_str += c
    return output_str