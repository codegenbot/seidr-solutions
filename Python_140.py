
def fix_spaces(text):
    import re
    return re.sub(r"\s{2,}", "_", text)