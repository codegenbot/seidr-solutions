```
def file_name_check(file_name):
    if len(file_name) > 0:
        parts = file_name.split('.')
        if len(parts) == 2 and len(parts[0]) > 0:
            if parts[0][0].isalpha() and all(c.isdigit() for c in parts[0][1:] if c.isdigit()):
                if parts[1].lower() in ['txt', 'exe', 'dll']:
                    return 'Yes'
    return 'No'