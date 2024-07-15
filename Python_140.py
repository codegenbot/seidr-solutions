def fix_spaces(text):
    result = ""
    for char in text:
        if char != " " or not (result.endswith(" ") and result.endswith(" ")):
            result += char.replace("  ", "-").replace(" ", "_")
        else:
            result += "-"
    return result