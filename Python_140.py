```
def fix_spaces(text):
    text = text.replace(" ", "_")
    return text.replace("  ","_-").replace("_  ","_-_").replace("   ","_---').replace('_   ','____').replace('__  ','_____').replace('___ ','_____ ').replace('____','____-').replace('_____','_____ ').replace('_____', '____--')