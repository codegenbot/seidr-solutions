def fix_spaces(text):
    lines = text.split("\n")
    fixed_text = ""
    for line in lines:
        fixed_line = (
            "    " + line.strip().replace("    ", "   ").strip()
            if not line.startswith("    ")
            else line
        )
        fixed_text += fixed_line + "\n"
    return fixed_text