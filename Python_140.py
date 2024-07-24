def fix_spaces(text):
    lines = text.split("\n")
    for i in range(len(lines)):
        while "--" in lines[i] or "---" in lines[i] or "----" in lines[i]:
            if "--" in lines[i]:
                lines[i] = lines[i].replace("--", "-")
            elif "---" in lines[i]:
                lines[i] = lines[i].replace("---", "-")
            elif "----" in lines[i]:
                lines[i] = lines[i].replace("----", "-")
        lines[i] = lines[i].replace("  ", " ").replace("   ", "_").strip()
    return "\n".join(lines)