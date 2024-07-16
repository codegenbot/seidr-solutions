```
def fix_spaces(text):
    if not text:
        return "Please enter a string"
    text = text.replace(' ', '_')
    return text.replace('  ', ' -').replace('_  ', '_ -').replace('_   ', '_ - ').replace('_    ', '_ -  ')