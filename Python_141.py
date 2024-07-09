```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if '.' not in file_name or file_name.count('.') != 1:
        return 'No'
    name, ext = file_name.split('.')
    if not name[0].isalpha():
        return 'No'
    allowed_extensions = ['txt', 'exe', 'dll']
    if ext not in allowed_extensions:
        return 'No'
    return 'Yes'