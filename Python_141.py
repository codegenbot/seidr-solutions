```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    elif '.' not in file_name or file_name.split('.')[0][0].lower() < 'a':
        return 'No'
    else:
        ext = file_name.split('.')[-1]
        if ext.lower() not in ['txt', 'exe', 'dll']:
            return 'No'
        else:
            return 'Yes'