def concatenate_strings(strings):
    return "".join(strings)

def check(concatenate_strings):
    strings = ['hello', 'world']
    result = concatenate_strings(strings)
    return result

print(check(concatenate_strings))