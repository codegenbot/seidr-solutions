def camel_case(s):
    return (
        "".join(word.capitalize() for word in s.split()[1:]).title()
        if " " in s
        else s.replace("-", "").capitalize() 
        if len(s) > 1
        else s.lower()
    )


print(camel_case(input()))