def fix_spaces(text):
    text = text.replace(" ", "_")
    return "".join(
        [
            (
                "_"
                if i != j and text[i] == " " and text[j] == " "
                else "_" if i == 0 or text[i - 1] != " " else "-"
            )
            for i, j in zip(
                range(len(text)), range(len(text)) if len(text) > 1 else [0, -1]
            )
        ]
    ).lstrip("_")