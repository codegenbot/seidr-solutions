```
def fix_spaces(text):
    lines = text.split("\n")
    result = []
    for line in lines:
        line = line.strip().replace(" ", "_").replace("--", "-").replace("---", "-").replace("----", "-")
        while "--" in line or "---" in line or "----" in line:
            line = line.replace("--", "-")
            line = line.replace("---", "-")
            line = line.replace("----", "-")
        result.append(line)
    return "\n".join(result)