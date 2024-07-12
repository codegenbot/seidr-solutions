def fix_spaces(text):
    return (
        text.replace(" ", "_")
        .replace(" +", "-")
        .replace("_  ", "_- ")
        .replace("_   ", "_-- ")
    )