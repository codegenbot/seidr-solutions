```
def camel_case(input_str):
    result = ""
    for word in input_str.split("-"):
        if not result:
            result = word
        else:
            result += word.capitalize()
    print(result)