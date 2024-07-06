def fix_spaces(text):
    result = ""
    prev_was_space = True
    for char in text:
        if char.isspace():
            if not prev_was_space:
                result += "_"
            else:
                result += "-"
            prev_was_space = True
        else:
            result += char
            prev_was_space = False
    return result


def check():
    if fix_spaces("   Exa 1 2 2 mple") != "-Exa_1_2_2_mple":
        raise Exception("Test failed")


check()