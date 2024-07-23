def fix_spaces(text):
    text = text.replace(" ", "_")
    text = "-".join(
        text.split("_") if i % 2 != 0 else [text[i : i + 1]] for i in range(len(text))
    )
    return text