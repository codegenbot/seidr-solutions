def fix_spaces(text):
    text = ' '.join(text.split())  
    return text.replace("\t", " ").replace(" ", "_")