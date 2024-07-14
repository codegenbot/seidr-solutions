```
def camel_case(input_str):
    result = ""
    words = input_str.split("-")
    for i in range(len(words)):
        if i > 0:
            result += words[i].capitalize()
        else:
            result += words[i]
    return result.replace("-", "").lower()