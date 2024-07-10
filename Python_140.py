def fix_spaces(text):
    new_text = text.replace(" ", "_")
    return new_text.replace(' '+{'_' if i<1 else '-':i*' ' for i in range(len(new_text))}.join(map(str,[' ']*len(new_text))), new_text)