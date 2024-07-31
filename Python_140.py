```
def fix_spaces(text):
    text = text.replace(" ", "_")
    while "--" in text or "- " in text or " " + text[text.index(" "):] == " " * (text.count(" ") // 2 * 2) + text[text.index(" "):]:
        if "--" in text:
            text = text.replace("--", "-")
        elif " -" in text:
            text = text.replace(" -", "_")
    return text