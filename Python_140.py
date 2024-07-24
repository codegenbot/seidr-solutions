```
def fix_spaces(text):
    lines = text.split("\n")
    for i in range(len(lines)):
        line = lines[i]
        while "--" in line or "---" in line or "----" in line:
            line = line.replace("--", "-")
            line = line.replace("---", "-")
            line = line.replace("----", "-")
        while "  " in line: 
            line = line.replace("  ", " ")
    return "\n".join(lines)