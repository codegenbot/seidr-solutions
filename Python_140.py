```
def fix_spaces(text):
    text = text.strip().replace(" ", "_")
    while "--" in text or "---" in text or "----" in text:
        text = text.replace("--", "-")
        text = text.replace("---", "-")
        text = text.replace("----", "-")
    return text

def check(input_text):
    assert fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple"
check(fix_spaces("   Exa 1 2 2 mple"))