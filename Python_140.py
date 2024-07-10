def fix_spaces(text):
    text = text.replace(" ", "_")
    return (
        "-".join(text.split("_")[:-1]) + "_" + text.split("_")[-1]
        if " " in text
        else text
    )