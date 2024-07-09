Here is the modified code:

```python
def fix_spaces(text):
    result = ""
    for i in range(len(text)):
        if i > 0 and text[i] == " " and text[i - 1] == " ":
            if len(result) > 0:
                result += "-"
        elif text[i] != " " or (i > 0 and text[i - 1] == " "):
            result += text[i].replace(" ", "_")
    return result + " "