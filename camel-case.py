def kebab_to_camel_case(string):
    words = string.split("-")
    camel_case = ""
    for i in range(len(words)):
        if i == 0:
            camel_case += words[i]
        else:
            camel_case += words[i].capitalize()
    return camel_case

string = input()
result = kebab_to_camel_case(string)
print(result)