```
def file_name_check(file_name):
    if '.' in file_name:
        filename, extension = file_name.rsplit('.', 1)
        if len([c for c in filename if c.isdigit()]) > 3:
            return 'No'
        if not filename[0].isalpha():
            return 'No'
        if extension.lower() not in ['txt', 'exe', 'dll']:
            return 'No'
    else:
        if len([c for c in file_name if c.isdigit()]) > 3:
            return 'No'
        if not file_name[0].isalpha():
            return 'No'
    return 'Yes'