def concatenate_strings(strings):
    return "".join(strings)

def check(concatenate_strings):
    if callable(concatenate_strings):
        print("Function is correct")
    else:
        print("Function is incorrect")