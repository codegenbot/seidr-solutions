def fix_spaces(text):
    text = text.replace(" ", "_").strip().replace("_ "," ").replace(" _"," ").replace "__ "," _" .replace " _", " "
    while "__" in text and "--" in text:
        text = text.replace("__", "-").replace("--", "-")
    return text.strip()