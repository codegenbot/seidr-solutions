import re

def fix_spaces():
    text = ''
    try:
        while True:
            line = input()
            if not line:
                break
            text += line.strip() + ' '
    except EOFError:
        pass

    text = re.sub(r'\s{2,}', '_', text)
    return "_".join(text.split())

result = fix_spaces()
print(result)