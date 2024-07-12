```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if '.' not in file_name or file_name.split('.').count('.') != 1:
        return 'No'
    if not file_name[:file_name.index('.')].isalpha():
        return 'No'
    if file_name[file_name.index('.') + 1:].lower() not in ['txt', 'exe', 'dll']:
        return 'No'
    return 'Yes'