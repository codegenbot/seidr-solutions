import re

def fix_spaces(text):
    if not text or not isinstance(text, str):
        return "Invalid input"
    text = text.strip().replace("--", "-").replace("\n", "").replace(" ", "_")
    return re.sub(r'_{1,}', lambda m: f"_{m.group(0).strip('_')}", text)