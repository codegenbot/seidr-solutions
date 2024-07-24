def check(string):
    return modify_string(string)


def modify_string(string):
    return "".join(
        [char.lower() if char.isupper() else char.upper() for char in string]
    )


flip_case = input()
result = check(flip_case)
print(result)