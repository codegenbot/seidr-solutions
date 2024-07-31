def fix_spaces(text):
    return (
        text.replace(" ", "_")
        .replace("  ", "_-_")
        .replace("   ", "-_-")
        .replace("    ", "---")
        .replace("     ", "----")
        .replace("      ", "------")
    )