def concatenate_strings(strings):
    return "".join(strings)

def check(concatenate_strings):
    if concatenate_strings(['hello', 'world']) == 'helloworld':
        return True
    else:
        return False