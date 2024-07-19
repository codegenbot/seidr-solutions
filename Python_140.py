```
def fix_spaces(text):
    text = text.replace(" ", "_")
    return (
        "".join(
            [
                (
                    "_"
                    if i > 0 and text[i - 1:i + 1] == "  " else "_" if text[i:i+1] == " " else text[i]
                )
                for i in range(len(text))
            ]
        )
        .replace("  ", "_")
    )