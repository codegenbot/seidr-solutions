```
def fix_spaces(text):
    lines = text.split('\n')
    new_lines = []
    for line in lines:
        line = line.strip().replace(" ", "_")
        while "--" in line or "---" in line or "----" in line:
            line = line.replace("--", "-")
            line = line.replace("---", "-")
            line = line.replace("----", "-")
        new_lines.append(line)
    return '\n'.join(new_lines)