```
def camel_case(input_str):
    result = ""
    for word in input_str.split("-"):
        if len(result) > 0:
            result += word.capitalize()
        else:
            result += word
    print(camel_case(input_str))