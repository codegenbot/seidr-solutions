```
def fix_spaces(text):
    text = text.replace(' ', '_')
    return ''.join(['_' if i > 0 and text[i] == ' ' and text[i-1] == ' ' else '_' if text[i] == ' ' else text[i] for i in range(len(text))]).replace('__', '_-').replace('_-_','-').replace('__','-').replace('___','-').replace('----','=')