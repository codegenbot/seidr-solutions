def fix_spaces(text):
    original_text = ""
    new_text = ""
    for i in range(len(text)):
        if text[i] == " ":
            original_text = text[:i+1]; 
            new_text += "_" if text[i] != " " else " "; 
            original_text = "" 
        else:
            if original_text:
                new_text += original_text
                original_text = ""
            new_text += text[i]
    return new_text