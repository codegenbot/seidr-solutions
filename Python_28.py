def concatenate_strings(strings):
    return "".join(strings)

def check(function):
    if callable(function):
        print("Function is callable")
    else:
        print("Function is not callable")