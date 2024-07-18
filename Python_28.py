def check(fn):
    correct_name = "concatenate_strings"
    return fn.__name__ == correct_name

def concatenate_strings(strings):
    return "".join(strings)