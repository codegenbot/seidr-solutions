def fix_spaces(text):
    return (
        text.replace(" ", lambda s: "_" if len(s.group()) == 1 else "-")
        .subn(r" +", r"-")
        .replace("_-_", "_")
    )