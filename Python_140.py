def fix_spaces(text): 
    new_text = ""
    for i in range(len(text)):
        if text[i] == " ": 
            if i < len(text) - 1 and text[i + 1] == " ":
                new_text += "-"
            else: 
                if new_text and new_text[-1] != " ":
                    new_text += "_"
        else:
            if i == 0 or (i > 0 and text[i] != " "):
                new_text += text[i]
    return new_text