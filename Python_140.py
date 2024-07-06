```
def fix_spaces(text):
    lines = text.splitlines()
    result = []
    
    for line in lines:
        new_line = ''
        
        for i in range(len(line)):
            if line[i] == ' ':
                if i > 0 and i < len(line) - 1 and line[i-1:i+2] in ['+-', '--']:
                    new_line += ' '
                else:
                    new_line += '_'
            elif line[i:i+2] in ['+-', '--']:
                new_line += '-'
            else:
                new_line += line[i]
        
        result.append(new_line.strip())
    
    return '\n'.join(result)