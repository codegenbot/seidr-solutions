def fix_spaces(text):
    return text.replace(" ", "%20")


def check(text):
    if len(text) < 5:
        return "Too short"
    elif len(text) > 10:
        return "Too long"
    else:
        return "Just right"


text = input()
fixed_text = fix_spaces(text)
print(check(fixed_text))