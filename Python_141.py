```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if '.' not in file_name or file_name.split('.').index('.') == 0:
        return 'No'
    if not file_name[:file_name.index('.')).isalpha():
        return 'No'
    extensions = ['txt', 'exe', 'dll']
    if file_name[file_name.index('.') + 1:].lower() not in extensions:
        return 'No'
    return 'Yes'