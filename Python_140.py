def fix_spaces(text):
    return (
        text.replace(" +", "-")
        .replace("_  ", "_- ")
        .replace("_   ", "_-- ")
        .replace(" ", "_")
    )