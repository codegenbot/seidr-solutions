```
def camel_case(input_str):
    result = ""
    i = 0
    while i < len(input_str):
        if input_str[i] == '-':
            result += input_str[i+1].upper()
            i += 2
        else:
            if i > 0:
                result += input_str[i].upper()
            i += 1
    return result